// TOKENIZING MODULE SOURCE
//#define _CRT_SECURE_NO_WARNINGS //this disables the security warnings (Visual Studio)
#define BUFFER_SIZE 300 //this is settings our input buffer to a max of 300 characters
#include "tokenizing.h" // This makes sure to include the tokenizing header file

int main (void) {
    tokenizing();
    return 0;
}
//V1
void tokenizing(void) { // this is the function declaration
    printf("*** Start of Tokenizing Words Demo ***\n");   //The beginning message for the user to let them know the demo has started
    char  words[BUFFER_SIZE + 1]; //this creates an array with the buffer size limit, this is what will be used to store user input //A +1 was added to fix an issue where it would not drop anything over 300 charac
    char* nextWord = NULL; // this creates our pointer and sets it to a safe empty state
    int wordsCounter; // declares our variable to track our number of words
    do {
        printf("Type a few words separated by space (q - quit):\n"); // the beginning of our loop prompting the  user for input
        fgets(words, BUFFER_SIZE, stdin); // this reads the user input and ensure that the input does not exceed BUFFER_SIZE
        words[strlen(words) - 1] = '\0'; // this repalces the newline character that fgets generates and replaces it will null characters
        if (strcmp(words, "q") != 0) { // compares thje user input to the string "q" if the input is not q it tokenizes the input
            nextWord = strtok(words, " "); // this splits the input into words separated by spaces the first first is store in nextword
            wordsCounter = 1;  //this sets wordscounter to 1 before processing the first word
            while (nextWord) { //the loop to process each word begins
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord); //prints the current word number and the word itself
                nextWord = strtok(NULL, " "); //retrieves the next word from the string if there is one
            }
        }
    } while (strcmp(words, "q") != 0); // this continutes the loop until the user enters the letter q
    printf("*** End of Tokenizing Words Demo ***\n\n"); // message to let the user know that the demo is over
}