#include <stdio.h>

int main()
{

    int num1=25;

    float num2=25.3;

    char alp='d';

    long num3=2255;

    double num4=852.36;

    long long int num5=852741965;



    int len1=sizeof(num1);
    int len2=sizeof(num2);
    int len3=sizeof(num3);
    int len4=sizeof(num4);
    int len5=sizeof(alp);
    int len6=sizeof(num5);
    


    printf(" int save bytes  %d \n",len1);
    printf("   float save bytes  %d\n ",len2);
    printf("  longsave bytes  %d\n ",len3);
    printf("   char save bytes  %d \n",len4);
    printf("   double save bytes  %d \n",len5);
    printf(" long long int save bytes  %d \n",len6);
    


}
