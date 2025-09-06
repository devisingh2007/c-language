#include <stdio.h>
int even_odd(int a, int b, char c)

{
    printf("%d\n", a + b);
    printf("%c\n", c);

    return 0;
}

int main()

{
    even_odd(25, 26, 'X');
}