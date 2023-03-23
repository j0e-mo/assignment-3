#include <stdio.h>
#include <stdlib.h>
int a,b;
void swapper(int *a, int *b);
int main()
{
    printf("What are the values you want to swap?\n");
    scanf("%d %d", &a, &b);
    swapper(&a,&b);
    printf("Values after swapping are %d and %d. \n", a,b);
    return 0;
}
void swapper(int *a, int *b)
{
    a = a^b;
    b = a^b;
    a = a^b;
}
