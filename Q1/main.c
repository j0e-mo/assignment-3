#include <stdio.h>
#include <stdlib.h>
int a,b;

int main()
{
    printf("Gimme 2 numbers: \n");
    scanf("%d %d", &a, &b);
    printf("Max of %d and %d is %d.",a,b, Get_Max(a,b));
    return 0;
}
int Get_Max(int a, int b)
{
    if (a>b)
        return a;
    else if (b>=a)
        return b;
}
