#include<stdio.h>
int main()

{
float tempechar ;
printf("enter your tempechar ");
scanf("%.2f",&tempechar);

if (tempechar >= 37)
    {

        printf("very hot.");
    }
    else if (tempechar>=25)
    {
      printf("warm and sunny.");
    }
    else if (tempechar>=15)
    {
       
        printf("cool.");
    }
    else
    {

        printf("very cool.");
    }
}