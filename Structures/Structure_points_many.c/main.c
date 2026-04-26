#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct
{
    int x, y;
}point;

void populate(point *p, int n)
{
    srand(clock());
    for(int i=0; i<n; i++)
    {
        p[i].x=rand()%10;
        p[i].y=rand()%10;
    }
}

void show(point p[], int n)
{
    for(int i=0; i<n; i++)
        printf("(%d, %d)\t", p[i].x, p[i].y);
}

int main()
{
    int n=10;
    point p[n];
    populate(p, n);
    show(p, n);
    return 0;
}