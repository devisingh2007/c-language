#include <stdio.h>
int main()

{
    int a, t = 1;
    printf("enter the number which one you need fectorial :");
    scanf("%d", &a);

    for (int i = 1; i <= a;   i++)
    {
        t = t * i;
    }
    printf("%d", t);
}