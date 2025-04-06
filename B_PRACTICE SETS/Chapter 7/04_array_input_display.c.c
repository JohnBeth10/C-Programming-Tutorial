/* QUESTION :

Write a C program to:

Take the size of an array from the user.
Validate the size (must be > 0).
Input elements into the array.
Print the array in the format: [a, b, c, ...] without a trailing comma.*/

#include <stdio.h> // Standard I/O library for input and output functions

int main(){
    int n = 0; // Declare a variable 'n' to store the number of elements in the array

    // Ask the user to input the number of elements they want in the array
    printf("Enter the total no of elements that you would like to have in your array: ");
    scanf("%d", &n); // Read the value of 'n' from user input

    // Check if the entered number is zero or negative
    if(n <= 0){
        printf("Array size cannot be zero or negative\n"); // Display error message
        return 1; // Exit the program early with a non-zero status to indicate failure
    }

    printf("\n"); // Print a newline for better formatting

    // Declare an integer array of size 'n'
    // Note: This uses Variable Length Arrays (VLAs), which are allowed in C99 and later
    int myarray[n];

    // Loop to take 'n' elements from the user and store them in the array
    for(int i = 0; i < n; i++){
        printf("Enter element %d of the array: ", i + 1); // Ask for the (i+1)th element
        scanf("%d", &myarray[i]); // Read the element and store it in the array
    }

    printf("\n"); // Newline for clean output formatting

    // Begin printing the array in the required format
    printf("Your array is: \n");
    printf("["); // Opening square bracket for the array format

    // Loop to print each element in the array
    for(int i = 0; i < n; i++){
        // Check if it's the last element
        if(i == n - 1){
            printf("%d", myarray[i]); // Print without a comma for the last element
        }
        else{
            printf("%d, ", myarray[i]); // Print element followed by comma and space
        }
    }
    printf("]\n\n"); // Closing square bracket and extra newline for neatness

    return 0; // Return 0 to indicate the program ended successfully
}
