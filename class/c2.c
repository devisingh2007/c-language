#include <stdio.h>
int main()

{
    int a;
    printf("enter your a number:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("%d is diveded by 2 and not diveded by 4", a);

        
        if (a % 4 == 0)
        {
            printf("%d is diveded by 4 and 2 both ", a);
        }
    }
    else
    {
        printf("%d is not diveded by 4 and 2 both ", a);
    }
    return 0;
}
