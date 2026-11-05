
#include<stdio.h>

struct Address
{
    char city[20];
    char country[20];
};

struct Employee
{
    char name[20];
    int id;
    struct Address addr;
};

int main()
{
    struct Employee e1 =             // e1.name=Karin; e1.id=101, e1.addr.city=Khulna, e1.addr.country= Bangladesh

    {
        "Karim",
        101,
        {"Khulna", "Bangladesh"}
    };

    printf("Name: %s\n", e1.name);
    printf("ID: %d\n", e1.id);
    printf("City: %s\n", e1.addr.city);
    printf("Country: %s\n", e1.addr.country);

    return 0;
}
