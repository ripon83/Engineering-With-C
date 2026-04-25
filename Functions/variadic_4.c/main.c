#include <stdio.h>
#include <stdarg.h>
void print(const char *str,...)
{
    va_list args;
    va_start(args, str);
    while(str!=NULL)
    {
        printf("%s",str);
        str = va_arg(args, const char *);
    }
    va_end(args);
}
int main()
{
    print("1.234\t","Hello\t","1234\n",NULL);
    print("A\t","String\t","1.2345\t","1234\n",NULL);
    print("Beautiful Codes\n",NULL);
    return 0;
}