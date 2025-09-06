#include<stdio.h>
int main()

{
int i,a,sum=0;
printf("enter some value :");
scanf("%d",&a);

for(int i=0; i<=a; i++)
{
    sum=sum+i;
}
printf("sum of this:%d",sum);
}