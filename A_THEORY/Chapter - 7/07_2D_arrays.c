#include <stdio.h> 

// Defining constants for the number of rows and columns using #define
// ROWS is set to 3 and COLS is set to 2
// This makes it easier to manage and change the array size later if needed
#define ROWS 3
#define COLS 2

int main(){
    // Declaring a two-dimensional (2D) array with 3 rows and 2 columns
    // The array will store integer values entered by the user
    int array[ROWS][COLS];
    
    // This part of the code is used to take input from the user
    // It fills the 2D array by asking the user to enter values row by row
    for(int row = 0 ; row < ROWS ; row++){          // Outer loop controls the rows (0 to 2)
        for(int col = 0; col < COLS; col++){        // Inner loop controls the columns (0 to 1)
            // Asking the user to enter the value for the current position [row][col]
            printf("Enter the value of array[%d][%d]: \n", row, col);
            
            // Taking input from the user and storing it in the array at the specified location
            // &array[row][col] means "store the input in the memory address of this cell"
            scanf("%d", &array[row][col]);
        }
    }

    // This part of the code is used to display the values that the user has entered
    // It shows the position [row][col] and the corresponding value stored in that cell
    for(int row = 0 ; row < ROWS ; row++){
        for(int col = 0; col < COLS; col++){
            // Printing each value along with its position in the 2D array
            printf("The value of array[%d][%d] is %d\n", row, col, array[row][col]);
        }
    }

    // This final part of the code prints the entire array in a grid/table-like format
    // It makes it easier to visualize the 2D array as a matrix
    for(int row = 0 ; row < ROWS ; row++){
        for(int col = 0; col < COLS; col++){
            // Printing the value followed by a space so that values appear side by side
            printf("%d ", array[row][col]);
        }
        // After printing one full row, we move to the next line
        // This makes the output look like a 2D table or matrix
        printf("\n");
    }

    // This line tells the computer that the program has completed successfully
    return 0;
}
