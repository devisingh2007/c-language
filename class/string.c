#include <stdio.h>
#include <string.h>
int main()
{/*
    char *str;
    char str2[] = "Devisingh Rajput";

    printf("%s\n", str2);

    scanf("%s", str);
    printf("%s\n", str);

    char str3[25];

    fgets(str3 ,sizeof(str3), stdin);
    puts(str3);

    char *str4="abcde";
    puts(str4);

    char one[20] = "ABC";

    char *two = "XYZ555544466  55555566";

    printf("%s\n",one);
    printf("%s",two);

    int legth=strlen(one);
    printf("%d\n",legth);

    printf("%zu",sizeof(one));

    strncat(one, two,55);
    printf("%s\n", one);

    strcat(one, one);
    printf("%s\n", one);

strncpy(one,two,10);
 printf("%s\n", one);*/
/*



    char name[] = "CodingGita"; // 'C','o','d','i','n','g','G','i','t','a','\0'

 
    for (int i = 0; i <= 10; i++) {
       
        // i=0:'C'(67), i=1:'o'(111), ..., i=9:'a'(97), i=10:'\0'(0)
        printf("i=%2d  char=%c  ascii=%3d  addr=%p\n",
               i, name[i], (int)name[i], (void*)&name[i]);
    }

   
    printf("\nAs string: %s\n", name);
*/

char str1[]="abc%*";
char str2[]="abc~";
printf("%d \n",strcmp(str1,str2));
     return 0;
}