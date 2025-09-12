#include <stdio.h>
int main()
{ /*
     int int_array[] = {10, 15, 18, 34, 29};
     int sum = 0;
     for (int i = 0; i < 5; i++)
     {
         if (int_array[i] % 2 == 0)
         {
             sum += int_array[i];
         }
     }
     printf("sum: %d \n", sum);*/

    int array[10] = { 10,15, 18, 34, };

    int array[12] = 999;

    for (int a = 0; a < 10; a++)
    {
        printf("int_array[%d] : %d \n", a, array[a]);
    }
    printf("\n%d", array[12]);

    printf("\n\n");

    return 0;
}
