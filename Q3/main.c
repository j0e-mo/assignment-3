#include <stdio.h>
#include <stdlib.h>
int count;
int main()
{
   int a;
   printf("Gimme a number:\n");
   scanf("%d",&a);
   Digit_Counter (a);
   printf("%d has %d digits.\n",a,count);
   return 0;
}
int Digit_Counter(int a)
{
    while(a!=0)
   {
       a=a/10;
       count++;
   }
   return count;
}
