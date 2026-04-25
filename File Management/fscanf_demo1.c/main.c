#include <stdio.h>
int main(){
    char buff[1024];
    FILE *fp=fopen("myfile.txt","r");
    while (fscanf(fp, "%*s %s", buff) == 1)
        printf("%s\n", buff); 
    fclose(fp);
    return 0;
}