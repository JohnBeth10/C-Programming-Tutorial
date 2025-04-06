// QUESTION: Repeat problem 2 for a general input provided by the user using scanf.

#include <stdio.h> // Include standard input/output header for using printf and scanf functions

int main(){ // Main function: program execution starts here
    int num; // Declare an integer variable to store the number entered by the user

    printf("Enter the number to get its multiplication table: "); 
    // Prompt the user to enter the number whose multiplication table needs to be generated

    scanf("%d", &num); 
    // Read the number entered by the user using scanf and store it in the variable 'num'

    int multi_table_of_num[10]; 
    // Declare an integer array of size 10 to store the first 10 multiples of the entered number

    // Loop to calculate and store the multiplication table values in the array
    for(int i = 0; i < 10; i++){
        multi_table_of_num[i] = num * (i + 1); 
        // Multiply the entered number with (i + 1) and store the result in the i-th index of the array
        // Using (i + 1) ensures that we get multiples starting from num x 1 to num x 10
    }

    // Loop to print the multiplication table using the values stored in the array
    for(int i = 0; i < 10; i++){
        printf("The value of %d X %d = %d\n", num, i + 1, multi_table_of_num[i]); 
        // Print the multiplication expression and the result in a readable format
        // Example output: "The value of 7 X 3 = 21"
    }

    return 0; // Return 0 indicates successful program termination
}
