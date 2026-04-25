#include <stdio.h>
int main()
{
    FILE *fp=fopen("myfile.txt","r");
    char buff[1024];
    int i=0;
    while(!feof(fp))
    {
        fread(buff,1,sizeof(buff)-1,fp);
        printf("Iteration %d: %s",++i,buff);
    }
    return 0;
}