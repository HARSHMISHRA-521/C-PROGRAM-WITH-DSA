#include <stdio.h>
typedef struct timestamp
{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int second;
}ts;
void display(ts c)
{
    printf("The date is : %d/%d/%d\n", c.date, c.month, c.year);
    printf("The time is : %d:%d:%d\n", c.hour, c.minute, c.second);
    printf("The time stamp  is : %d/%d/%d %d:%d:%d\n", c.date, c.month, c.year, c.hour, c.minute, c.second);
}
int scomparison(ts c1, ts c2)
{
    if (c1.year > c2.year)
    {
        return 1;
    }
    if (c1.year < c2.year)
    {
        return -1;
    }
    if (c1.month > c2.month)
    {
        return 1;
    }
    if (c1.month < c2.month)
    {
        return -1;
    }
    if (c1.date > c2.date)
    {
        return 1;
    }
    if (c1.date < c2.date)
    {
        return -1;
    }
    if (c1.hour > c2.hour)
    {
        return 1;
    }
    if (c1.hour < c2.hour)
    {
        return -1;
    }
    if (c1.minute > c2.minute)
    {
        return 1;
    }
    if (c1.minute < c2.minute)
    {
        return -1;
    }
    if (c1.second > c2.second)
    {
        return 1;
    }
    if (c1.second < c2.second)
    {
        return -1;
    }
    return 0;
}
int main()
{
   
    
   //  ts st1 ,st2;
    ts st1 = {12, 10, 20, 8, 25, 50};
    ts st2 = {12, 10, 20, 5, 25, 50};
   
    display(st1);
    
    display(st2);
    int rt = scomparison(st1, st2);
    if (rt == 0)
    {
        printf("the time stamp are equal\n");
    }
    if (rt == 1)
    {
        printf("the time stamp one is greater than timestamp two\n");
    }
    if (rt == -1)
    {
        printf("the time stamp two is greater than time stamp one \n");
    }
    return 0;
}