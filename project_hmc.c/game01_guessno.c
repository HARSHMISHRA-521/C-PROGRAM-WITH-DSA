#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main()
{
    int number, guess, guessno = 1;
    srand(time(0));
     number = rand()% 100 + 1;
    printf("***HMC PRESENTS***\nTHE NO. GUESSING GAME\n");
    printf("\n\n");
    do
    {
        printf("GUESS THE NO between 1-100:");
        scanf("%d",&guess);
        if (guess > number)
        {
            printf("GUESS LOWER NO. PLEASE\n");
        }
        else if (guess < number)
        {
            printf("GUESS THE HIGHER NO. PLEASE\n");
        }
        else
        {
            printf("YOU GUESSED THE RIGHT NO.\n");
            printf("YOU GUESSED IN %d chances", guessno);

           
        } guessno++;

        }while (guess != number);
        
            
        return 0;
    }