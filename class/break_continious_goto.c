#include <stdio.h>

int main() {
     int num1;
        for(num1=1; num1<=50; num1++)
            {
                if(num1%5==0)
                    {
                        continue;
                    }
                if(num1>40)
                    {
                        break;
                    }
                
                if(num1==25)
                    {
                        goto lable ;
                    }
                printf("%d \n",num1);
                
            }
        
        lable :
            printf("\nReached 25");
    
     for(num1=0; num1<=50; num1=num1+5)
            {
                 
                          printf("\n %d ",num1);
                    
              
            }