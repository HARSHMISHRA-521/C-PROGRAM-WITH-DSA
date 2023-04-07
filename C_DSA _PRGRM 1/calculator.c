#include<stdio.h>
int main(){
    int num1,num2,ch,result;
    printf("Enter the numbers \n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("Enter the choise for calculation:\n 1-sum\t2-subtraction\t3-multiplication\t4-divison\t5-remainder\n");
    scanf("%d",&ch);
    switch(ch){
        case 1 : result = num1 + num2;
        break;
        case 2 : result = num1 - num2;
        break;
        case 3 : result = num1*num2;
        break;
        case 4: result = num1/num2;
        break;
        case 5: result = num1%num2;
        break;
        default : printf("entered wrong choise\n");
    }
    printf("the result of your choise is %d\n",result);
    return 0;
}