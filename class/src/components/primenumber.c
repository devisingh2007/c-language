#include <stdio.h>
int main()

{
    int num, t = 0;
    printf("enter a number :");
    scanf("%d", &num);
    for (int i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
            
        }
    }
    if (t == 0)
    {
        printf("it is a prime number");
    }
    else
    {
        printf("it is not a prime number");
    }
}