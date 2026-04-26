#include <stdio.h>
#include <time.h>
#include <stdlib.h>
typedef struct Demo
{
    int *arr;
    int size;
}demo;
demo *create(int n)
{
    demo *d=(demo *)malloc(sizeof(demo));
    d->size=n;
    d->arr=(int *)malloc(sizeof(int)*d->size);
    return d;
}
void populate(demo *d)
{
    srand(clock());
    for(int i=0; i<d->size; i++)
        d->arr[i]=rand()%10;
}
void show(demo *d)
{
    for(int i=0; i<d->size; i++)
        printf("%d\t", d->arr[i]);
}
int main()
{    
    demo *d1=create(10);
    demo *d2=create(12);
    populate(d1);
    populate(d2);
    printf("The d1's array is:\n");
    show(d1);
    printf("\nThe d2's array is:\n");
    show(d2);
    return 0;
}