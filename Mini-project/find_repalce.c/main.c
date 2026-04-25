#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isBoundary(char c)
{
    return c == '\0' || !isalpha(c);
}

void replaceFirst(char text[], char oldWord[], char newWord[])
{
    char buffer[1000];
    char *pos = text;
    int len = strlen(oldWord);

    while ((pos = strcasestr(pos, oldWord)) != NULL)
    {
        if ((pos == text || isBoundary(*(pos - 1))) && isBoundary(*(pos + len)))
        {
            int index = pos - text;

            strncpy(buffer, text, index);
            buffer[index] = '\0';

            strcat(buffer, newWord);
            strcat(buffer, pos + len);

            strcpy(text, buffer);
            return;  
        }
        pos++;   
    }
}

void replaceAll(char text[], char oldWord[], char newWord[])
{
    char buffer[1000];
    char *pos, *start = text;
    int len = strlen(oldWord);

    buffer[0] = '\0';

    while ((pos = strcasestr(start, oldWord)) != NULL)
    {
        if ((pos == text || isBoundary(*(pos - 1))) && isBoundary(*(pos + len)))
        {
            strncat(buffer, start, pos - start);
            strcat(buffer, newWord);
            start = pos + len;
        }
        else
        {
            strncat(buffer, start, pos - start + 1);
            start = pos + 1;
        }
    }

    strcat(buffer, start);
    strcpy(text, buffer);
}

int main()
{
    char text[1000], oldWord[50], newWord[50];
    int choice;

    printf("Enter paragraph:\n");
    fgets(text, sizeof(text), stdin);

    while (1)
    {
        printf("\nMenu");
        printf("\n1. Replace FIRST occurrence");
        printf("\n2. Replace ALL occurrences");
        printf("\n3. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        if (choice != 1 || choice !=2)
            break;

        printf("Word to find: ");
        scanf("%s", oldWord);

        printf("Replace with: ");
        scanf("%s", newWord);

        if (choice == 1)
            replaceFirst(text, oldWord, newWord);
        else if (choice == 2)
            replaceAll(text, oldWord, newWord);
        else
            printf("Invalid choice\n");

        printf("\nUpdated paragraph:\n%s\n", text);
    }

    return 0;
}
