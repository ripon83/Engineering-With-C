#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Complex
{
	int real;
	int img;
}complex;
void set(complex *comp)
{
    srand(clock());
    comp->real=rand()%10+1;
    comp->img=rand()%10+1;
}
void show(complex comp)
{
    printf("The complex number is: ");
	printf("%d+%di", comp.real, comp.img);
}
int main()
{
    complex comp;
    set(&comp);
    show(comp);
    return 0;
}