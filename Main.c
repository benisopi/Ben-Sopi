/*
 * Program: Display Full Name
 * --------------------------
 * This program demonstrates the use of escape characters in C.
 * It prints the my full name ("Ben Sopi") with formatted output
 * using newline (\n) and tab (\t) characters.
 */

#include <stdio.h>   // Include the Standard I/O library

int main(void) {
    // Print the label "Full Name:", then move to a new line
    printf("Full Name:\n");
    
    // Print a tab, then the actual name "Ben Sopi", followed by a newline
    printf("\tBen Sopi\n");
    
    return 0;       // Indicate successful program termination
}
