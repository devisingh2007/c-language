#include<stdio.h>

void max(int arr[])
{  
        int max=arr[0];

    for(int i=0; i<9; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }

    printf(" max value  is %d\n",max);
}

int min(int arr[])
{


   int min=arr[0];

    for(int i=0; i<9; i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf(" min is %d",min);
}


int sum(int arr[])
{
    int sum;

    for(int i=0; i<9; i++)
    {
        sum=sum+arr[i];

    }
    printf("sum is : %d ",sum);
}

int main()
{
int arr[25]={25,28,3,9,7,35,99,585,88,8};

sum(arr);
max(arr);

}