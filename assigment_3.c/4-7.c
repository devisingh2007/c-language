#include <stdio.h>

int main()

{
    int a, b=0;
    for (a = 1; a <= 50; a++)
    {
        b = b + a;
    }

    printf("%d\n", b);
}