#include<stdio.h>

struct Student
{
    char name[20];
    int id;
    float cgpa;
};

int main()
{
    struct Student s[3];

    // Input
    for(int i = 0; i < 3; i++)
    {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].id);
        scanf("%f", &s[i].cgpa);
    }

    // Output
    printf("\nStudent Information:\n");

    for(int i = 0; i < 3; i++)
    {
        printf("Name: %s\n", s[i].name);
        printf("ID: %d\n", s[i].id);
        printf("CGPA: %.2f\n", s[i].cgpa);
        printf("\n");
    }

    return 0;
}
