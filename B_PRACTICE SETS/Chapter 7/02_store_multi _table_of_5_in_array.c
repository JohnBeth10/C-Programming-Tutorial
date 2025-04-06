//QUESTION:  Write a program to create an array of 10 integers and store multiplication table of 5 in it.

#include <stdio.h> // Includes the Standard Input Output header for using printf and other I/O functions

int main(){ // Entry point of the program

    int multi_table_of_5[10]; // Declare an integer array of size 10 to store the first 10 multiples of 5

    // This loop is used to populate the array with the multiplication table of 5
    for(int i = 0; i < 10; i++){ // Loop runs from i = 0 to i = 9 (10 times total)
        multi_table_of_5[i] = 5 * (i + 1); 
        // Here, (i + 1) ensures the multiples start from 5x1 to 5x10 instead of 5x0
        // The result is stored in the i-th index of the array
        // Example: When i = 0, it stores 5 * 1 = 5 at index 0
    }

    // This loop prints out the contents of the array in a multiplication table format
    for(int i = 0; i < 10; i++){ // Again, loop runs 10 times to print all values
        printf("The value of 5 X %d = %d\n", i + 1, multi_table_of_5[i]); 
        // Prints the multiplication expression (e.g., 5 x 1) and its corresponding value from the array
        // i + 1 is used to match the correct multiplier (since i starts from 0)
        // Example output: "The value of 5 X 1 = 5"
    }

    return 0; // Indicates that the program finished successfully
}
