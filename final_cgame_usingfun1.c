#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


char* myChoice() {
    int user_choice;
    char *userChoice;

    while (1) {
        printf("Enter your choice:\n1. Rock\n2. Paper\n3. Scissors\n");
        printf("Your choice: ");
        scanf("%d", &user_choice);

        if (user_choice >= 1 && user_choice <= 3) {
            switch (user_choice) {
                case 1:
                    userChoice = "rock";
                    break;
                case 2:
                    userChoice = "scissors";
                    break;
                case 3:
                    userChoice = "paper";
                    break;
            }
            return userChoice;
        } else {
            printf("Invalid choice. Please choose a number between 1 and 3.\n");
        }
    }
}


char* randomChoice() {
    char *choices[] = {"rock", "paper", "scissors"};
    int num_choices = 3;
    int randomIndex = rand() % num_choices;
    return choices[randomIndex];
}


void mainGame() {
    printf("Starting the game...\n");
    srand(time(NULL));

    char *computerChoice = randomChoice();
    char *userChoice = myChoice();

    printf("Computer's choice: %s\n", computerChoice);
    printf("Your choice: %s\n", userChoice);

    if (strcmp(computerChoice, userChoice) == 0) {
        printf("It's a tie!\n");
    } else if ((strcmp(computerChoice, "rock") == 0 && strcmp(userChoice, "scissors") == 0) ||
               (strcmp(computerChoice, "paper") == 0 && strcmp(userChoice, "rock") == 0) ||
               (strcmp(computerChoice, "scissors") == 0 && strcmp(userChoice, "paper") == 0)) {
        printf("Computer wins!\n");
    } else {
        printf("You win!\n");
    }
}

int main() {
    int choice;

    while (1) {
        printf("Welcome to the Start Game Screen\n");
        printf("------------------------------\n");
        printf("1. Start\n");
        printf("2. Exit\n");
        printf("3. Development\n");

        printf("Please select an option (1-3 or 0 to exit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                mainGame();
                break;
            case 2:
                printf("Exiting the game. Goodbye!\n");
                exit(0);
            case 3:
                printf("Development Screen\n");
                printf("Made by Aadit 41\n");
                printf("Made by Chirag 37\n");
                printf("Made by Kunal 48\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option (1-3 or 0 to exit).\n");
        }
    }

    return 0;
}
