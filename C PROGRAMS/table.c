#include <stdio.h>
// A PROGRAM TO CALCULATE THE TABLE OF A NO. OF USER'S CHOISE AND UPTO THE USER'S CHOISE
int main()
{
    int n, i, j;
    int table1;
{
     printf("A PROGRAM BY HARSH MISHRA \n");
     printf("A PROGRAM BY SARTHAK MISHRA \n");
    printf("pls enter the no,to find the table. \n ");
    scanf("%d", &n);
    printf("enter the no .upto which the table is to be shown \n");
    scanf("%d", &j);
{printf("   the table of the no is\n ");
    for (i = 1; i <= j; i++)
    {
        // int table1 = n * i;
        // table1++;
        printf(" %d * %d = %d \n", n, i,(n * i));
    }
    printf(" THANK YOU   ");
}
}
    
       
 
    return 0;
}
