#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter value of a:");
    scanf("%d", &a);

    printf("enter value of b:");
    scanf("%d", &b);

    printf("enter value of c:");
    scanf("%d", &c);

    if (a < b && a<c)
    {       
            printf("a is smallest ");
    
    }
    else if (b < c)
    {
        printf("b is smallest ");
    }
    else
    {
        printf("c is smallest ");
    }
}