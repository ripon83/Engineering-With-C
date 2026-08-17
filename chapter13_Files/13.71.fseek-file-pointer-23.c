/*
 * Program: Fseek File Pointer 23
 * Purpose: Demonstrates the corresponding file-management concept
 *          presented in Chapter 13.
 */

#include <stdio.h>
#include <string.h>

int search(FILE *fp, char *user)
{
    char str[128];
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while(fgets(str, sizeof(str), fp) != NULL)  // Read a line/string from the file
    {
        str[strcspn(str, "\n")] = 0;
        if(strcmp(str, user)==0)
            return 1;
    }
    return 0;  // Indicate successful program termination
}

int authenticity(FILE *fp, char *user, char *pass)
{
    char str1[128], str2[64];
    fseek(fp, 0, SEEK_SET);  // Reposition the file pointer
    while(fgets(str1, sizeof(str1), fp) != NULL)  // Read a line/string from the file
    {
        fgets(str2, sizeof(str2), fp);  // Read a line/string from the file
        str1[strcspn(str1, "\n")] = 0;
        str2[strcspn(str2, "\n")] = 0;
        if(strcmp(str1, user)==0 && strcmp(str2, pass)==0)
            return 1;
    }
    return 0;  // Indicate successful program termination
}

void signup(FILE *fp)
{
    char user[128], password[64];
    printf("Enter your user ID:");  // Display output
    scanf("%s", user);  // Read input from the user
    printf("Enter your password:");  // Display output
    scanf("%s", password);  // Read input from the user
    if(search(fp, user))
    {
        printf("User is exists!\n\n");  // Display output
        return;
    }
    fseek(fp, 0, SEEK_END);  // Reposition the file pointer
    fprintf(fp, "%s\n%s\n", user, password);  // Write formatted data to the file
    printf("Congratulations! User has successfully registered.\n\n");  // Display output
}

void login(FILE *fp)
{
    char user[128], password[64];
    printf("Enter your user ID:");  // Display output
    scanf("%s", user);  // Read input from the user
    printf("Enter your password:");  // Display output
    scanf("%s", password);  // Read input from the user
    if(authenticity(fp, user, password))
        printf("You are authenticated!\n\n");  // Display output
    else
        printf("Authentication fails.\n\n");  // Display output
}

void run(FILE *fp)
{
    int choice;
    while(1)
    {
        printf("1. Register\n2. Login\n3. Exit\n");  // Display output
        printf("Enter your choice:");  // Display output
        scanf("%d", &choice);  // Read input from the user
        if(choice==1)
            signup(fp);
        else if(choice==2)
            login(fp);
        else if(choice==3)
            break;
        else
            printf("Wrong choice! Retry again.\n");  // Display output
    }
    fclose(fp);  // Close the file
}
int main()  // Main function: program execution starts here
{
    FILE *fp=fopen("secret.txt", "a+");  // Open the file with the specified mode
    if(fp==NULL)
    {
        printf("Unable to create a file!");  // Display output
        return 1;
    }
    run(fp);
    return 0;  // Indicate successful program termination
}
