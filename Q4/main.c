#include <stdio.h>
#include <stdlib.h>
int correct_code = 1234;
int code;
int main()
{
    printf("What's your code?\n");
    scanf("%d",&code);

    login(code);

    if (login())
        printf("Welcome aboard, Captain.\n");
    if(!login())
        printf("Wrong code, gtfo of here!\n");

    return 0;
}
int login(int a)
{
    if (code == correct_code)
        return 1;
    else
        return 0;
}
