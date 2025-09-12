#include<stdio.h>

int main()

{
//  for(int i=65; i<=67; i++)
//  {
//     for(int j=1; j<=3; j++)
//     {
//         printf("%c",i);
//     }
//     printf("\n");
//  }

// for(int i=1 ; i<=3 ; i++)
// {
//     for(int j=1 ; j<=i ; j++)
//     {
//         printf("%d",j);
//     }
//       printf("\n");
// }
// for(int i=65 ; i<=67 ; i++)
// {
//     for(int j=65 ; j<=i ; j++)
//     {
//         printf("%c",j);
//     }
//       printf("\n");
// }
/*
// for(int i=1 ; i<=3 ; i++)
// {
//     for(int j=67 ; j>=65 ; j--)
//     {
//         printf("%c",j);
//     }
//       printf("\n");
// }
*/


// for(int i=3; i>=1; i-- )
// {
//     for(int j=i; j>=1; j--)
//     {
//         printf("%d",j);
//     } printf("\n");
// }

int num =3;
//scanf("%d",&num);
for(int i=65; i<=67; i++)
{
    for(int j=65; j<=i; j++)
    {
        printf("%c",j);
    }printf("\n");
}
printf("\n");printf("\n");

for(int i=65; i<=67; i++)
{
    for(int j=1; j<=3; j++)
    {
         printf("%c",i);
    }printf("\n");
}
printf("\n");printf("\n");

for(int i=67; i>=65; i--)
{
    for(int j=1; j<=3; j++)
    {
         printf("%c",i);
    }printf("\n");
}
printf("\n");printf("\n");


for(int i=1; i<=3; i++)
{
    for(int j=67; j>67-i; j--)
    {
          printf("%c",j);
    }printf("\n");
}
printf("\n");printf("\n");
for(int i=1; i<=3; i++)
{
    for(int j=67; j>=64+i; j--)
    {
        printf("%c",j);
    }printf("\n");
}
}

