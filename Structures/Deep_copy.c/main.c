#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct 
{
    char *name;
    int age;
}Demo;

int main() 
{
    Demo d1;
    d1.age=40;
    d1.name=malloc(20);
    strcpy(d1.name, "Gobin");
    
    Demo d2;
    d2.age=40;
    d2.name=malloc(20);
    strcpy(d2.name, d1.name);
    printf("Before modification\n");
    printf("Demo1=> Name:%s\tAge:%d\n", d1.name, d1.age);
    printf("Demo2=> Name:%s\tAge:%d\n", d2.name, d2.age);
    
    strcpy(d2.name, "Ramji"); 
    d2.age=38;
    printf("After modification\n");
    printf("Demo1=> Name:%s\tAge:%d\n", d1.name, d1.age);
    printf("Demo2=> Name:%s\tAge:%d\n", d2.name, d2.age);
    return 0;
}