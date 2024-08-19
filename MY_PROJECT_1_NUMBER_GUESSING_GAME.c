//NUMBER GUESSING GAME
#include<stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int guessed_number, num,chance;

    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    num = (rand() % 100) + 1;
    
    printf("Guess a number between 1-100: \n");
    scanf("%d", &guessed_number);

    for (chance=0; guessed_number!=num; chance++)
    {
        if(guessed_number<num)
        {   
            printf("Higher number please!\n");
            scanf("%d", &guessed_number);
        }

        else
        {   
            printf("Lower number please!\n");
            scanf("%d", &guessed_number);
        }
    }

    if (guessed_number==num)
        printf("Yayyyyy!!!! The number you guessed_numed is correct :) \n");
    printf("No. of chances took: %d\n", chance);
    return 0;
}