#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

struct subject
{
    char name[100];
    int mark;
};

typedef struct 
{
    char name[1000];
    char RNo[1000];
    struct subject *sub;
    int total;
    float percentage;
}Student;

void init(Student *st, int n, int m)
{
    for(int i=0; i<n; i++)
    {
        st[i].total=0;
        st[i].sub=(struct subject *)malloc(m*sizeof(struct subject));
    }
}

void populate(Student *st, int n, int m)
{
    char sname[100];
    char roll[100];
    char subname[100];
    int i, j;
    init(st, n, m);
    printf("Creating student information...\n");
   	for(i=0; i<n; i++)
   	{
   	    srand(clock());
       	sprintf(sname,"Student%d", (i+1));
       	strcpy(st[i].name, sname);
       	sprintf(roll,"Roll %d", (i+1));
       	strcpy(st[i].RNo, roll);
       	for(j=0; j<m; j++)
       	{
           	sprintf(subname,"Subject%d", (j+1));
           	strcpy(st[i].sub[j].name, subname);
           	st[i].sub[j].mark=rand()%100;
           	st[i].total+=st[i].sub[j].mark;
       	}
       	st[i].percentage=(st[i].total/500.0)*100;
   	}
    printf("Created student information sucessfully\n");
}

void save(FILE *fp, Student *st, int n, int m)
{
    int i, j;
    printf("Saving the student information in a file.\n");
   	for(i=0; i<n; i++)
   	{
        fprintf(fp,"%s\t%s:\t", st[i].RNo, st[i].name);
       	for(j=0; j<m; j++)
       	{
            fprintf(fp,"%s\t%2d\t", st[i].sub[j].name, st[i].sub[j].mark);
       	}
       	fprintf(fp,"Total=%2d\tPercentage=%.2f%%", st[i].total, st[i].percentage);
       	fprintf(fp, "\n");
   	}
    printf("Student information has successfully saved in a file.\n");
}

void print(FILE *fp, Student st[], int n, int m)
{
    int i,j;
    for(i=0; i<n; i++)
   	{
   	    fscanf(fp, "%s\t%s", st[i].RNo, st[i].name);
        printf("%s\t%s:\t", st[i].RNo, st[i].name);
       	for(j=0; j<m; j++)
       	{
       	    fscanf(fp, "%s\t%2d\t", st[i].sub[j].name, st[i].sub[j].mark);
            printf("%s\t%2d\t", st[i].sub[j].name, st[i].sub[j].mark);
       	}
       	fscanf(fp, "Total=%2d\tPercentage=%.2f%%", st[i].total, st[i].percentage);
       	printf("Total=%2d\tPercentage=%.2f%%", st[i].total, st[i].percentage);
       	printf("\n");
   	}
}

int main()
{
    FILE *fp=fopen("Students.txt", "w+");
    int n=20, m=5;
    Student st[n];
    populate(st, n, m);
    save(fp, st, n, m);
    print(fp, st, n, m);
    fclose(fp);
    return 0;
}