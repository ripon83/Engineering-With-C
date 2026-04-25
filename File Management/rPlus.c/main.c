#include <stdio.h>
int main()
{
    char buff[100];
    int i=0;
    FILE *fp=fopen("myfile.txt","r+");
    fprintf(fp,"Dog disspects dogs\nDog hinders dogs\nDog hates dogs\nDog fight with dogs.");
    fseek(fp,0,SEEK_END);
    fprintf(fp,"\n\nHuman respects human\nHuman helps human\nHuman loves human\nHuman welcomes human.");
    return 0;
}
