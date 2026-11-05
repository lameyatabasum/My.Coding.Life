#include<stdio.h>
#include<sting.h>
struct student
{
    int sid;
    int mark;
};
struct student changevalue2(struct student t)
{
    t.mark=t.mark+10;
    return t;
};
