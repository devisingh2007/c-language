#include <stdio.h>
int main()

{
    int age;
    printf("enter your age:");
    scanf("%d", &age);

    if (age <= 13)
    {
        printf("Child");
    }
    else if (age >= 13 && age <= 19)
    {
        printf("Teen");
    }
    else if (age >= 20 && age <= 59)
    {
        printf("Adult");
    }
    else if (age > 60)
    {
        printf("Senior");
    }
}