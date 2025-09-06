#include <stdio.h>

int main()
{
    int i ;

    for (int i = 1; i <= 10; i++)
{
     for (int a = 1; a <= 10; a++){
        printf("%d * %d = %d\n", i,a, a * i);
}
printf("\n\n");
}
}
