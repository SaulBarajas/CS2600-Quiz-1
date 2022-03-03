#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    srand(time(NULL));
    int correctNum, guess, counter, choice = 0, max = 10, wins, played = 0;
    char userInput[2];
    char winStats[100] = "a";
    char result[50];
    int maxCondition;
    while(choice != 3){
        printf("Press 1 to play a game");
        printf("\nPress 2 to change the max number");
        printf("\nPress 3 to quit\n");
        scanf("%d", &choice);
        if(choice == 1){
            correctNum = rand() % max + 1;
            guess= 0;
            counter = 0;
            played++;
            while(guess != correctNum){
                printf("\nGuess a number that's not negative and not above %d\n", max);
                scanf("%s", &userInput);
                if(strcmp(userInput,"q") == 0){
                    strcat(winStats, "L");
                    break;
                }
                else{
                    guess = atoi(userInput);
                }
                if(guess < correctNum){
                    printf("\nYour guess is too low");
                    counter++;
                }
                else if(guess > correctNum){
                    printf("\nYour guess is too high");
                    counter++;
                }
                else{
                    counter++;
                    printf("\nYou guessed the correct number!\n");
                    sprintf(result, "%d", counter);
                    strcat(winStats, result);
                }
            }
        }

        else if(choice == 2){
            maxCondition = 0;
            while(maxCondition == 0){
                printf("\nPlease enter the max number you would like.");
                printf("\nDo not enter a negative number or a number greater than the default max 10.\n");
                scanf("%d", &max);
                if(max > 0 && max <= 10){
                    maxCondition = 1;
                }
            }
        }

        else if(choice == 3){
            printf("Thank you for playing!");
            printf("\nYou played a total of %d game(s)", played);
            printf("\nThe following will be your guessing stats in every game: (L = Lost)");
            for(int i = 1; i <= played; i++){
                printf("\n Game %d: ", i);
                printf("%c ", winStats[i]);
            }
        }
    }


        
    

    return 0;
}