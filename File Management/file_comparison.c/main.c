#include <stdio.h>
#include <string.h>

void compare(FILE *fp1, FILE *fp2)
{
    char *p1=NULL, *p2=NULL;
    char s1[200], s2[200];
    int line=1, diff=0;
    while(1)
    {
        p1=fgets(s1, sizeof(s1), fp1);
        p2=fgets(s2, sizeof(s2), fp2);
        if(p1==NULL && p2==NULL)
            break;
        if(p1==NULL || p2==NULL || strcmp(s1, s2)!=0)
        {
            
            if(p1==NULL)
                printf("Difference in the line number %d at File2\n", line);
            else
            if(p2==NULL)
                printf("Difference in the line number %d at File1\n", line);
            else
                printf("Difference found at line number %d\n", line);
            diff=1;
        }
        line++;
    }
    if(!diff)
        printf("No difference!");
}
int main()
{
    FILE *fp1=fopen("file1.txt", "r");
    FILE *fp2=fopen("file2.txt", "r");
    
    compare(fp1, fp2);
    return 0;
}