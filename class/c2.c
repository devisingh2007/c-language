#include<stdio.h>

int main(){
 char i;
 printf("enter a To z    and A to Z only\n");
 printf("enter a charecter ");
 scanf("%c",&i);

 int a=(int)i;

 if(a>=65 && a<=90)
 {
    printf("upper hello  case");
 }

 else
 {
    printf("lower case");
 }



}