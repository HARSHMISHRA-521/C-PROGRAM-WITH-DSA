#include <stdio.h>
int main()
{
    int num, original, rem, rev = 0;
    printf("****Palindrome number*****\n\n");
    printf("Enter the positive number\n");
    scanf("%d", &num);
  
    if (num < 0)
    {
        printf("enter the valid positive number\n");
        return 0;
    }
      original = num;
      if(num==0){
          printf ("0 is not a plindrome no\n");
          return 0;
      }
    
        while (num != 0)
        {
            rem = num % 10;

            rev = rev * 10 + rem;
            num = num / 10;
        }

        if (rev == original)
        {
            printf("The number is a palindrome number\n\n");
            printf("*************************************");
        }
        
        else
            printf("The number is not a palindrome number\n\n");
            printf("*************************************");
        
        
    return 0;
}