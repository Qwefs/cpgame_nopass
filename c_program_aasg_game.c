#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


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
                printf("Starting the game...\n");
                 srand(time(NULL));

    // Define the choices as strings
    char *choices[] = {"rock", "paper", "scissors"};
    int num_choices = 3; // Number of choices

    int randomIndex = rand() % num_choices;
    char *randomChoice = choices[randomIndex];

    int user_choice;
    char *userChoice;

    while (1) {
        printf("Enter your choice:\n1. Rock\n2. Paper\n3. Scissors\n");
        printf("Your choice: ");
        scanf("%d", &user_choice);

        if (user_choice >= 1 && user_choice <= 3) {
            break; // Exit the loop when a valid choice is entered
        } else {
            printf("Invalid choice. Please choose a number between 1 and 3.\n");
        }
    }

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

    printf("Computer's choice: %s\n", randomChoice);
    printf("Your choice: %s\n", userChoice);

    if (strcmp(randomChoice, userChoice) == 0) {
        printf("It's a tie!\n");
    } else if ((strcmp(randomChoice, "rock") == 0 && strcmp(userChoice, "scissors") == 0) ||
               (strcmp(randomChoice, "paper") == 0 && strcmp(userChoice, "rock") == 0) ||
               (strcmp(randomChoice, "scissors") == 0 && strcmp(userChoice, "paper") == 0)) {
        printf("Computer wins!\n");
    } else {
        printf("You win!\n");
    }


                break;
            case 2:
                printf("Exiting the game. Goodbye!\n");

                exit(0);
            case 3:
                printf("Development Screen\n");
                printf("Made by Aadit 41\n");
                break;
            default:
                printf("Invalid choice. Please select a valid option (1-3 or 0 to exit).\n");
        }
    }

    return 0;
}
