#include <stdio.h>
int main()

{
    int num1, a = 1;
    int x = 0;
    printf("enter the value of num1: ");
    scanf("%d", &num1);

    for (int i = 1; i <= num1; i++)
    {
        a = a * i;
    }
    for (int i = 2; i < num1; i++)
    {
        if (num1% i == 0)
        {
            x = 1;
        }
    }
    if (x == 0)
    {
        printf("%d is prime number", num1);
    }
    else
    {
        printf("%d is not a prime number", num1);
    }

    printf("the fectorial of %d is %d", num1, a);
}