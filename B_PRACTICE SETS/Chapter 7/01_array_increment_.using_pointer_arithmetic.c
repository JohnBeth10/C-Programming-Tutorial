/* QUESTION:

   Create an array of 10 numbers.
   Verify using pointer arithmetic that (ptr+2) points to the third element
   where ptr is a pointer pointing to the first element of the array. */

#include <stdio.h> // This is a standard input/output library in C, needed for printf()

int main()
{ // The starting point of every C program

    int array[] = {12, 24, 36, 48, 60, 72, 84, 96, 108, 120};
    // Declares an array of 10 integers and initializes it with values.
    // The array stores 10 numbers in consecutive memory locations.

    int *ptr = array;
    // Declares a pointer to an integer named 'ptr' and assigns it to point to the first element of the array.
    // This is equivalent to: int* ptr = &array[0];

    printf("The value at address %u is %d\n", ptr + 2, *(ptr + 2));
    // This line prints two things:
    // 1. The address (memory location) of the third element of the array using pointer arithmetic (ptr + 2).
    //    Since arrays are stored in contiguous memory, ptr+2 means two positions ahead of ptr, which points to the third element.
    // 2. The value stored at that address using the dereference operator '*'.
    //    *(ptr + 2) gives us the actual value stored at that position (which is the third element of the array).

    printf("The third element of the array is %d\n", array[2]);
    // This line directly accesses the third element of the array using array indexing.
    // It prints the value of array[2] to verify that it matches *(ptr + 2).

    return 0;
    // Returns 0 from the main function, which tells the operating system that the program ended successfully.
}

