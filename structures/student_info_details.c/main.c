#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define MAX_SUBJECTS 5

typedef struct 
{
    char gname[25];
    char mname[25];
    char sname[25];
} Name;

typedef struct Address
{
    char hno[10];
    char street[50];
    char post[50];
    char ps[50];
    char dist[50];
    char state[50];
    char pin[10];
} address;

typedef struct Contact
{
    address adrs;
    char phone[15];
    char email[150];
} contact;

typedef struct Subject
{
    char subcode[10];
    char subname[50];
    char subtype[10];
    int credit;
} subject;

typedef struct Marks
{
    subject s;
    int grade;
} marks;

typedef struct Student
{
    Name name;
    contact con;
    marks m[MAX_SUBJECTS];
}student;


typedef struct
{
    student *data;
    int size;
    int capacity;
} StudentDB;

StudentDB *createDB(int n)
{
    StudentDB *s=(StudentDB *)malloc(sizeof(StudentDB));
    s->data=(student *)malloc(sizeof(student)*n);
    s->size=-1;
    s->capacity=n;
    return s;
}

int getRand()
{
    int r=0;
    srand(clock()^(unsigned long)(&r));
    r=rand();
    for(int i=0; i<r%97; i++)
    {
        srand(clock()^r);
        r=rand();
    }
    return r;
}

int getRange(int min, int max)
{
    return getRand() % (max - min + 1)+min;
}

char *getGName()
{
    char *gNames[]   = {"Amit","Rahul","Rohan","Arjun","Kunal","Aryan","Yash", "Dhruv", "Rohit", "Vedant", "Kabir", "Tejas"};
    return gNames[getRange(0,11)];
}

char *getMName()
{
    char *mNames[] = {"Kumar","Rao","Chandra","Raj","Ram","Lal", };
    return mNames[getRange(0,5)];
}

char *getSName()
{
    char *sNames[]   = {"Roy", "Verma", "Mehta", "Gupta", "Bose", "Das", "Sharma", "Singh", "Tiwari", "Reddy", "Yadav", "Khan"};
    return sNames[getRange(0,11)];
}

char *getStreet()
{
    char *streets[]  = {"MGroad","MainSt","ParkRd","LinkRd","HillRd"};
    return streets[getRange(0,4)];
}

char *getCity()
{
    char *cities[]   = {"Guwahati","Delhi","Patna","Kolkata","Lucknow"};
    return cities[getRange(0,4)];
}

char *getState()
{
    char *states[]   = {"Assam","Delhi","Bihar","WB","UP"};
    return states[getRange(0,4)];
}


char *getSubName(int i)
{
    char *subjects[] = {"Maths","Physics","Chemistry","CS","English"};
    return subjects[i];
}


char *getSubCode(int i)
{
    char *subCodes[] = {"M101","P102","C103","CS104","E105"};
    return subCodes[i];
}

char *getSubType()
{
    char *types[] = {"Theory","Practical", "Extra Activity"};
    return types[getRange(0,2)];
}



void populateRandomStudent(student *s , int id)
{
    strcpy(s->name.gname, getGName());
    strcpy(s->name.mname, getMName());
    strcpy(s->name.sname, getSName());

    sprintf(s->con.adrs.hno, "%dB", getRange(1,200));
    strcpy(s->con.adrs.street, getStreet());
    strcpy(s->con.adrs.post, getCity());
    strcpy(s->con.adrs.ps, "PS");
    strcpy(s->con.adrs.dist, getCity());
    strcpy(s->con.adrs.state, getState());
    sprintf(s->con.adrs.pin, "%06d", getRange(700000,799999));

    sprintf(s->con.phone, "9%d", 100000000 + id);
    sprintf(s->con.email, "student%d@mail.com", id);

    for (int i = 0; i < MAX_SUBJECTS; i++)
    {
        strcpy(s->m[i].s.subname, getSubName(i));
        strcpy(s->m[i].s.subcode, getSubCode(i));
        strcpy(s->m[i].s.subtype, getSubType());
        s->m[i].s.credit = getRange(2,4);
        s->m[i].grade = getRange(4,10);
    }
}

void populateRandomStudents(StudentDB *s)
{
    int i;
    for (i = 0; i < s->capacity; i++)
        populateRandomStudent(&s->data[++s->size], i);

    printf("%d students generated successfully!\n", i);
}

float calculateGPA(student *s)
{
    float p = 0; int c = 0;
    for (int i = 0; i < MAX_SUBJECTS; i++)
    {
        p += s->m[i].grade * s->m[i].s.credit;
        c += s->m[i].s.credit;
    }
    return p / c;
}

void displayStudents(StudentDB *s)
{
    printf("\n===== STUDENT LIST =====\n");

    for (int i = 0; i <= s->size; i++)
    {
        printf("\n%d) %s %s %s", i+1, s->data[i].name.gname, s->data[i].name.mname, s->data[i].name.sname);
        printf("\n   Phone : %s", s->data[i].con.phone);
        printf("\n   Email : %s", s->data[i].con.email);
        printf("\n   City  : %s, %s", s->data[i].con.adrs.dist, s->data[i].con.adrs.state);
        printf("\n   GPA   : %.2f\n", calculateGPA(&s->data[i]));
    }
}

void searchStudent(StudentDB *s, char *name)
{
    for (int i=0, j=1; i <= s->size; i++, j++)
    {
        if(strcmp(s->data[i].name.gname, name)==0)
        {
            printf("\n%d) Name  : %s %s %s",j, s->data[i].name.gname, s->data[i].name.mname, s->data[i].name.sname);
            printf("\n    Phone : %s", s->data[i].con.phone);
            printf("\n    Email : %s", s->data[i].con.email);
            printf("\n    City  : %s, %s", s->data[i].con.adrs.dist, s->data[i].con.adrs.state);
            printf("\n    GPA   : %.2f\n", calculateGPA(&s->data[i]));
        }
    }
}

int main()
{
    int n;
    printf("How many students to auto-populate? ");
    scanf("%d", &n);
    StudentDB *s=createDB(n);
    int count = 0, ch;
    char name[25];
    do
    {
        printf("\n1. Auto Populate Students");
        printf("\n2. Display Students");
        printf("\n3. Search students");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        if (ch==1) populateRandomStudents(s);
        else if (ch==2) displayStudents(s);
        else if (ch==3) 
        {
            printf("Enter the student's given name: ");
            scanf ("%s",name);
            searchStudent(s, name);
        }

    } while (ch != 0);

    return 0;
}
