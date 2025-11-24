#include<stdio.h>

enum Day { Mon,TUE,WED,THU,FRI,SAT,SUN};
enum Exam {
    CLanguage=37,
    HTMLCSS=34,
    GIT_GITHUB=36,
    JS,
    MATHS=40

};

int main()
{
enum  Day d1=Mon;
enum  Exam e1=JS;

for(int i=Mon; i<=SUN; i++)
{
printf("DAY%4d\n",i);   
}

 
printf("%d\n",e1);    
    return 0;
}