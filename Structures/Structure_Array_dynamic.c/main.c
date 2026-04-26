#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct Array
{
    int *arr;
    int size;
    int capacity;
}array;
array *create(int n)
{
    array *ptr=(array *)malloc(sizeof(array));
    ptr->size=-1;
    ptr->capacity=n;
    ptr->arr=(int *)malloc(sizeof(int)*n);
    return ptr;
}
void insert(array *ptr, int key)
{
    if(ptr->size < ptr->capacity-1)
        ptr->arr[++ptr->size]=key;
    else
        printf("Full! No insertion.\n");
}
void show(array *ptr)
{
    for(int i=0; i<=ptr->size; i++)
        printf("%d\t", ptr->arr[i]);
}
void populate(array *ptr)
{
    int n;
    while(1)
    {
        printf("\nEnter a number (-9999 to exit):");
        scanf("%d", &n);
        if(n==-9999)
            break;
        insert(ptr, n);
        printf("The array is:\n");
        show(ptr);
    }
}
int main()
{
    array *ptr=create(100);
    populate(ptr);
    return 0;
}