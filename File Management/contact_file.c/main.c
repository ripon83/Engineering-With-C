#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[151];
    char phone[16];
    char email[51];
}Person;

typedef struct
{
    Person *p;
    int capacity;
    int size;
}Contact;

Contact *create(int n)
{
    Contact *con=(Contact *)malloc(sizeof(Contact));
    con->p=(Person *)malloc(n*sizeof(Person));
    con->size=-1;
    con->capacity=n;
    return con;
}

void loadContact(FILE *fp, Contact *con)
{
    int i=0;
    fseek(fp, 0, SEEK_SET);
    while(fscanf(fp, "%150[^,],%15[^,],%50[^\n]\n", con->p[i].name, con->p[i].phone, con->p[i].email)==3)
    {
        con->size++;
        i++;
    }
    if(i==0)
        printf("File is empty!\n");
    else
        printf("A total %d contacts are loaded.\n\n", i);
}

int search(Contact *con, char str[])
{
    for(int i=0; i<=con->size; i++)
    {
        if(strcmp(con->p[i].name, str)==0 || strcmp(con->p[i].phone, str)==0 || strcmp(con->p[i].email, str)==0)
        {
            printf("Name  : %s\n", con->p[i].name);
            printf("Phone : %s\n", con->p[i].phone);
            printf("Email : %s\n\n", con->p[i].email);
            return 1;
        }
    }
    return 0;
}

void addContact(FILE *fp, Contact *con)
{
    char phone[16], name[151], email[51];
    printf("Enter name: ");
    scanf(" %[^\n]", name);
    printf("Enter phone number: ");
    scanf(" %s", phone);
    printf("Enter Email: ");
    scanf(" %s", email);
    
    if(search(con, phone)==0)
    {
        con->size++;
        strcpy(con->p[con->size].name, name);
        strcpy(con->p[con->size].phone, phone);
        strcpy(con->p[con->size].email, email);
        fprintf(fp, "\n%s,%s,%s", con->p[con->size].name, con->p[con->size].phone, con->p[con->size].email);
        printf("Contact added successfully.\n\n");
        fflush(fp);
    }
    else
        printf("Contact exists!\n\n");
}
void show(Contact *con)
{
    for(int i=0; i<=con->size; i++)
    {
        printf("Person %d\n", i+1);
        printf("Name  : %s\n", con->p[i].name);
        printf("Phone : %s\n", con->p[i].phone);
        printf("Email : %s\n\n", con->p[i].email);
    }
}

void run(FILE *fp, Contact *con)
{
    int ch;
    char str[150];
    loadContact(fp, con);
    while(1)
    {
        printf("\n1. Search\n2. Add contact\n3. Display the directory\n4. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        if(ch==1)
        {
            printf("Enter either name, phone or email to be searched: ");
            scanf(" %[^\n]", str);
            search(con, str);
        }
        else if(ch==2)
            addContact(fp, con);
        else if(ch==3)
            show(con);
        else
            break;
    }
}

int main()
{
    FILE *fp=fopen("contact.txt", "a+");
    if(fp==NULL)
    {
        printf("File is not created!");
        return 1;
    }
    Contact *con=create(250);
    run(fp, con);
    fclose(fp);
    return 0;
}