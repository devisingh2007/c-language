#include <stdio.h>
int main()

{
    int num1, num2,a ;
    printf("enter the value of num1: ");
    scanf("%d", &num1);

    printf("enter the value of num2: ");
    scanf("%d", &num2);

    printf("if you need '+' type 1,  for '-' type 2,  for'%' type 3  for'*' type 4   for '/' type 5  :");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        printf("the sum of num1 and num2 is %d", num1 + num2);
        break;
    case 2:
        printf("the subtion of num1 and num2 is %d", num1 - num2);
        break;
    case 3:
        printf("the moduls of num1 and num2 is %d", num1 % num2);
        break;
    case 4:
        printf("the multiplcation of num1 and num2 is %d", num1 * num2);
        break;
    case 5:
        printf("the division of num1 and num2 is %d", num1 / num2);
        break;

    default:
        printf("invelide number");
        break;
    }
}