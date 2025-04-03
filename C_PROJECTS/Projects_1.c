/*If the player’s guess is higher than the actual number, the program displays “Lower number please”. 
Similarly, if the user’s guess is too low, the program prints “Higher number please”. 
When the user guesses the correct number, 
the program displays the number of guesses the player used to arrive at the number. 
Hint: Use loop & use a random number generator.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int random_num, guessed_num;

    // Seed the random number generator with the current time 
    // to get different random numbers each time the program runs
    srand(time(0)); 

    // Generate a random number between 1 and 100
    random_num = (rand() % 100) + 1;

    printf("Guess the random number: ");
    
    int no_of_guesses = 0; // Variable to keep track of the number of guesses
    
    // Loop until the user correctly guesses the number
    do
    {
        scanf("%d", &guessed_num); // Take user input
        
        // Provide hints to guide the user
        if (guessed_num > random_num)
        {
            printf("Lower number please\n");
        }
        else if (guessed_num < random_num)
        {
            printf("Higher number please\n");
        }
        else
        {
            printf("Congrats!\n"); // User guessed correctly
        }

        no_of_guesses++; // Increment the number of guesses
    }
    while (guessed_num != random_num); // Repeat until the correct guess

    // Display the number of attempts made by the user
    printf("You guessed the number in %d guesses\n", no_of_guesses);

    return 0;
}
