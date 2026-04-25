#include <stdio.h>
void encrypt(FILE *fp, FILE *out, char *key)
{
    char ch;
    int i=0;
    while((ch=fgetc(fp))!=EOF)
    {
        fputc((ch^key[i])^(i%100), out);
        i++;
        if(i==128)
            i=0;
    }
}
void decrypt(FILE *out, char *key)
{
    char ch;
    int i=0;
    fseek(out, 0, SEEK_SET);
    while((ch=fgetc(out))!=EOF)
    {
        printf("%c", (ch^key[i])^(i%100));
        i++;
        if(i==128)
            i=0;
    }
}
int main()
{
    FILE *fp=fopen("input.txt", "r");
    FILE *out=fopen("output.txt", "w+");
    char key[]="5305aff5de5c093c9a6e458f05b25dcfaded1e0bfbd824f6babf2bae8b5dbf98b132b350eb9aaa2429035bb27888cb7509b91edcec3e7fffe4500370b45330ad";
    encrypt(fp, out, key);
    decrypt(out, key);
    fclose(fp);
    fclose(out);
    return 0;
}