#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","w+");
    fprintf(fp,"abcdefghijklmnopqrstuvwxyz");
    printf("After the writing, the file pointer points to: %ld\n",ftell(fp));
    fseek(fp,-10,SEEK_CUR);
    printf("Moving file pointer 10 bytes backward and the file pointer is: %ld\n",ftell(fp));
    fseek(fp,-6,SEEK_CUR);
    printf("Again moving 6 bytes backward and the file pointer is: %ld\n",ftell(fp));
    printf("The file pointer pointing to the character is: %c\n",fgetc(fp));
    printf("After reading the file pointer is: %ld\n",ftell(fp));
    fseek(fp,6,SEEK_CUR);
    printf("Again moving 6 bytes forward and the file pointer is: %ld\n",ftell(fp));
    fclose(fp);
    return 0;
}