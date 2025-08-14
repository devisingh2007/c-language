#include <stdio.h>
int main()

{
    int a = 2;

    while (a <= 10)

    {
        int s = 2;
        for (int i = 2; i <= a/2; i++)
        {
            if (a % 2 == 0)
            {
                s = 0;
                break;
            }
        }
        if (s == 2)
        {
            printf("%d\n", a);
        }
    a++;

    }
}
