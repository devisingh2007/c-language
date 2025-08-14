#include <stdio.h>
int main()

{
    int a;
    printf("enter a number :");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wenesday");
        break;
    case 4:
        printf("thusday");
        break;
    case 5:
        printf("friday");

        break;
    case 6:
        printf("Saturday");

        break;
    case 7:
        printf("sunday");

        break;
    default:
        printf("invelid entry");
        break;
    }
}
