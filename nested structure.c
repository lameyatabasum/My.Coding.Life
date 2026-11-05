#include<stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    char name[20];
    struct Date dob;   // Nested Structure //
};

int main()
{
    struct Student s1;

    scanf("%s", s1.name);
    scanf("%d %d %d",
          &s1.dob.day,   //s1.dob.day
          &s1.dob.month,
          &s1.dob.year);

    printf("Name: %s\n", s1.name);
    printf("DOB: %d-%d-%d\n",
           s1.dob.day,
           s1.dob.month,
           s1.dob.year);

    return 0;
}
