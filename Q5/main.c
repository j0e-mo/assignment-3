#include<stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Where do you want to stop?\n");
    scanf("%d",&a);
    printf("The Fibonacci Series from 0 to %d: is 0 1 ",a);
    Fib(a-2);
  return 0;
 }
void Fib(int a)
{
    static int x=0,y=1,z;
    if(a>0){
         z = x + y;
         x = y;
         y = z;
         printf("%d ",y);
         Fib(a-1);
    }
}
