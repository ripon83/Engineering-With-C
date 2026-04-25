#include <stdio.h>
#include <string.h>

int search(FILE *fp, char *user)
{
    char str[128];
    fseek(fp, 0, SEEK_SET);
    while(fgets(str, sizeof(str), fp) != NULL)
    {
        str[strcspn(str, "\n")] = 0;
        if(strcmp(str, user)==0)
            return 1;
    }
    return 0;
}

int authenticity(FILE *fp, char *user, char *pass)
{
    char str1[128], str2[64];
    fseek(fp, 0, SEEK_SET);
    while(fgets(str1, sizeof(str1), fp) != NULL)
    {
        fgets(str2, sizeof(str2), fp);
        str1[strcspn(str1, "\n")] = 0;
        str2[strcspn(str2, "\n")] = 0;
        if(strcmp(str1, user)==0 && strcmp(str2, pass)==0)
            return 1;
    }
    return 0;
}

void signup(FILE *fp)
{
    char user[128], password[64];
    printf("Enter your user ID:");
    scanf("%s", user);
    printf("Enter your password:");
    scanf("%s", password);
    if(search(fp, user))
    {
        printf("User is exists!");
        return;
    }
    fseek(fp, 0, SEEK_END);
    fprintf(fp, "%s\n%s\n", user, password);
    printf("Congratulations! User has successfully registered.\n");
    fflush(fp);
}

void login(FILE *fp)
{
    char user[128], password[64];
    printf("Enter your user ID:");
    scanf("%s", user);
    printf("Enter your password:");
    scanf("%s", password);
    if(authenticity(fp, user, password))
        printf("You are authenticated!\n");
    else
        printf("Authentication fails.\n");
}

void run(FILE *fp)
{
    int choice;
    while(1)
    {
        printf("1. Register\n2. Login\n3. Exit\n");
        printf("Enter your choice:");
        scanf("%d", &choice);
        if(choice==1)
            signup(fp);
        else if(choice==2)
            login(fp);
        else if(choice==3)
            break;
        else
            printf("Wrong choice! Retry again.\n");
    }
    fclose(fp);
}
int main()
{
    FILE *fp=fopen("secret.txt", "a+");
    if(fp==NULL)
    {
        printf("Unable to create a file!");
        return 1;
    }
    run(fp);
    return 0;
}