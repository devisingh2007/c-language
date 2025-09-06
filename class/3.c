#include<stdio.h>

void forfun()
{
    printf("hello");

}
int int_fun()
{
    printf("return int \n");
    return 0;
}
char char_fun()
{    char b='a';
    printf("%d",b);
    return 'a';
}
float float_fun()
{
     printf("return float \n");
    return 0.23;
}



int main()
{
    int_fun();
    char_fun();
    float_fun();
    return 0;
}