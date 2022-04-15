/*  LAB 2:  Guessing Game

    guessGame.c


*/

#include <stdio.h>
#include <stdlib.h>

int main() {
   int sys_choice = 0;
   int found = 0;
   int user_guess = 0;
   int num_tries = 0;
   int triesPerGame[5] = {0,0,0,0,0};
   int runsum = 0;
   int avgGuesses = 0;


     for (int i = 0; i < 5; i++) {

        found = 0;
        num_tries = 0; 
        printf("==================================\n");
        printf("CPU Says:  Pick a number 1-20 \n");
        printf("==================================\n");
        
        sys_choice = rand() % 21;

        while (!found){
   
             printf("Make a guess:  ");
             scanf("%d", &user_guess);
             if (user_guess == sys_choice) {
                  printf("You got it!\n");
                  found = 1;
             }
             else if ((user_guess < 0) || (user_guess > 20)){
                  printf("Enter a number BETWEEN 0 and 20!!.. try again\n");
             }
             else if (user_guess < sys_choice){
                  printf("Too Low! Guess higher.\n");
             }
             else {  // (user_guess > sys_choice)
                  printf("Too High.  Guess lower. \n");
             }
   	     num_tries++; 
        }//WHILE

        triesPerGame[i] = num_tries;

     }//FOR


     printf("==================================================\n");
     printf("| Here are the results of your guessing abilities!\n");
     printf("==================================================\n");
     for (int i = 0; i< 5; i++) {
         printf("Game %d took you %d guesses \n",i, triesPerGame[i]);
         runsum = runsum + triesPerGame[i];
     }//FOR
     avgGuesses = runsum / 5;
     printf("On average it took you %d guesses until you guessed correctly.",\
           avgGuesses);



     printf("\n");
     return 0;
} //MAIN
