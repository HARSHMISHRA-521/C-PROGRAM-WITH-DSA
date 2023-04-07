#include <stdio.h>
int main()
{
    int defyear = 2001;
    int leap, left, totalday, day, year, dif;
    printf("\n******DAY CALCULATOR *******\n");
    printf("enter the year after 2001 : \n");
    scanf("%d", &year);
    dif = year - defyear;
    leap = dif / 4;
    left = dif - leap;
    totalday = (leap * 366) + (left * 365) + 1;
    day = (totalday % 7)-1;
    printf("the day on 01/01/%d : \n", year);
    if (day == 0)
        printf("monday\n");
    else if (day == 1)
        printf("tuesday\n");
    else if (day == 2)
        printf("wednesday\n");
    else if (day == 3)
        printf("thursday\n");
    else if (day == 4)
        printf("friday\n");
    else if (day == 5)
        printf("saturday\n");
    else if (day == 6)
        printf("sunday\n");
    else
        printf("wrong choise\n");
    return 0;
}