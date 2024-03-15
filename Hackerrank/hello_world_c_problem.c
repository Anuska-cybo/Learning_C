
/*This challenge requires you to print Hello, World! on a single line, and then print the already provided input string to stdout. If you are not familiar with C, you may want to read about the printf() command.*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	// Print "Hello, World!" on a single line
    printf("Hello, World!\n");

    // Print the input string provided
    char inputString[100]; // Assuming the input string won't exceed 100 characters
    scanf("%99[^\n]", inputString); // Read input string until newline character or up to 99 characters
    printf("%s", inputString); // Print the input string
    return 0;
}