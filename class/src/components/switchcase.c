#include <stdio.h>
int main()

{
    int  a,b;
    printf("enter a number :");
        scanf("%d", &a);

        
    printf("enter a number :");
        scanf("%d", &b);

char c;
printf("enter a opreter :");
scanf(" %c",&c);

switch (c)
{
case '+':
printf("sum of a and b is %d",a+b);
break;
case '-':
printf("subtriction of a and b is %d",a-b);
break;
case '*':
printf("multiply of a and b is %d",a*b);
break;
case '/':
printf("diveide of a and b is %d",a/b);
break;
case '%':
printf("modulas of a and b is %d",a%b);


     
break;
default:
printf("invelid entry");
    break;
}

















 }
 