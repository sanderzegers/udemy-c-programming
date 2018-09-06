#include <stdlib.h>
#include <time.h>
#include <stdio.h>

void challenge_chapter45(){

 time_t t;
 srand((unsigned)time(&t));
 int randomNumber = rand() % 21;
 int triesLeft = 5.0;
 int guess = 100;


 //printf("My RandomNumber: %d, guess it!\n",randomNumber);

 while(guess!=randomNumber && triesLeft >0){
    printf("You have %d tries left\n\n",triesLeft);

    do{
    printf("Enter a number between 0-20: ");
    scanf("%d",&guess);

    if(guess>20 || guess<0){
        printf("ERROR: Enter a valid number between 0 and 20\n");
        char temp; //If numnumeric character is typed, it will remain in stdinput
        scanf("%c", &temp);
    }

    } while(guess > 20 || guess < 0);

     if (randomNumber==guess){
     break;
     }

     if (guess>randomNumber){
            printf("\nTry a smaller value.\n");
     }
     else{
            printf("\nTry a larger value.\n");
     }

    triesLeft--;
 }



 if (randomNumber==guess){
    printf("Congratulations, %d is correct",guess);
 }
 else{
    printf("You lose, my number was %d",randomNumber);
 }

}
