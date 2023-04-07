#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, userno;
    srand(time(0));
    number = rand()%3 + 1;
    printf("\n\n***🎇HMC PRESNTS🎇***\n\n ***STONE, PAPER, AND SCISSIOR GAME 🎭***\n\n");
    printf("ENTER YOUR CHOISE \n\n");
    printf("ENTER 1 FOR ROCK\n");
    printf("ENTER 2 FOR SCISSIOR\n");
    printf("ENTER 3 FOR PAPER\n");
    scanf("%d", &userno);
     if (userno < 0 || userno > 3){
    {
        printf("wrong choise \n\n");
    }
    return 0;
}
      
    if (number == 1){
        printf("COMPUER'S CHOISE IS ROCK\n");
    }
    else if (number == 2){
        printf("COMPUTER'S CHOISE IS SCISSIOR\n");
    }
    else if (number ==3 ){
        printf("COMPUTER'S CHOISE IS PAPER\n");
    }
     if (userno == 1){
        printf("YOUR'S CHOISE IS ROCK\n");
    }
    else if (userno == 2){
        printf("YOUR'S CHOISE IS SCISSIOR\n");
    }
    else if (userno ==3 ){
        printf("YOUR'S CHOISE IS PAPER\n");
    }
     if (number == 1 &&userno == 1 || number == 2 &&userno == 2 || number == 3 &&userno == 3){
        {
            printf(" TIE!\n");
        } 
        return 0;
} 
    while (userno > 0 || userno <= 3)
    {
        if (number == 2 &&userno == 1 || number == 1 &&userno == 3 || number == 3 || userno == 2)
        {
            printf("HURRAY🥳! \n YOU  WON🎉\n\n");
            
        }
        else if (number == 1 &&userno == 2 || number == 3 &&userno == 1 || number == 2 &&userno == 3)
        {
            printf("OOPS! \n BETTER LUCK NEXT TIME 😓\n");
        }
      
        break;
    }        
   
    return 0;
}