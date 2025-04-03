#define BUFFER_SIZE 80  // Define the size for input strings
#include "manipulating.h"

int main (void) {
    manipulating();
    return 0;
}
void manipulating(void) 
{
    /* Version 1 */     // Function to demonstrate string concatenation
        // Print header to indicate the start of the demo
        printf("*** Start of Concatenating Strings Demo ***\n");

        // Declare two strings to store user input
        char string1[BUFFER_SIZE];
        char string2[BUFFER_SIZE];

        // Start a loop to allow repeated concatenation until "q" is entered
        do {
            // Prompt the user to enter the first string
            printf("Type the 1st string (q - to quit) : \n");

            // Read the first string from input
            fgets(string1, BUFFER_SIZE, stdin);

            // Remove the newline character at the end of the string
            string1[strlen(string1) - 1] = '\0';

            // If the first string is NOT "q", proceed with concatenation
            if (strcmp(string1, "q") != 0) {
                // Prompt the user for the second string
                printf("Type the 2nd string: \n");

                // Read the second string from input
                fgets(string2, BUFFER_SIZE, stdin);

                // Remove the newline character at the end of the second string
                string2[strlen(string2) - 1] = '\0';

                // Safely concatenate the strings, ensuring no buffer overflow
                strncat(string1, string2, BUFFER_SIZE - strlen(string1) - 1);

                //// Concatenate the second string to the first
                //strcat(string1, string2); // possible buffer overflow

                // Display the resulting concatenated string
                printf("Concatenated string is \'%s\'\n", string1);
            }

            // Continue looping until the user enters "q" as the first string
        } while (strcmp(string1, "q") != 0);

        // Print footer to indicate the end of the demo
        printf("*** End of Concatenating Strings Demo ***\n\n");
    }


/* Version 2 */     // Function to demonstrate string comparison


/* Version 3 */      // Function to demonstrate string searching

