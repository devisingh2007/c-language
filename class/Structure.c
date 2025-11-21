#include <stdio.h>

struct st1
{
    char *name;
    char *email;
    long long int mobile;
};

struct st2
{
    int tenth;
    int twelth;
    int sem1;
};

struct st3
{
    char *section;
    char *university;

    struct st1 dk;
    struct st2 d2;
};

int main()
{
    struct st3 m1;

    m1.dk.name = "Devisingh";
    m1.dk.email = "devisingh@gmail.com";
    m1.dk.mobile = 2582582582;
    m1.d2.tenth = 520;
    m1.d2.twelth = 509;
    m1.d2.sem1 = 8.9;
    m1.section = "CE";
    m1.university = "Swaminarayan university ";

    printf("\n\nName %s\n", m1.dk.name);
    printf("Name %s\n", m1.dk.email);
    printf("mobile : %lld\n", m1.dk.mobile);
    printf("\n\ntenth  marks : %d\n", m1.d2.tenth);
    printf("twelth  marks : %d\n", m1.d2.twelth);
    printf("sem1  CGPA : %d\n", m1.d2.sem1);
    printf("\n\nsection :%s", m1.section);
    printf("university :%s", m1.university);

    return 0;
}