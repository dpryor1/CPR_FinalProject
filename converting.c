// // CONVERTING MODULE SOURCE
#define BUFFER_SIZE 80 //set capacity of BUFFER_SIZE as 80
#include "converting.h" //include header file

int main (void) {
    converting ();
    return 0;
}
/* Version 1 */
void converting(void) {  //this function will convert an integer string to an integer number
printf ("*** Start of Converting Strings to int Demo ***\n") ;
char intString [BUFFER_SIZE]; //variable to store user input
int intNumber; //variable to store the result of the convertion
do {
printf ("Type an int numeric string (q - to quit) : \n"); //prompt the user to enter an integer numeric string
fgets (intString, BUFFER_SIZE, stdin); //reads user input
intString [strlen(intString) - 1] = '\0'; //makes sure that string ends with null character ('\0')
if (strcmp (intString, "q") != 0) { //compare the given string to "q" (key to end the program). Convertion will run if they are not equal
intNumber = atoi(intString); //converts the numeric string to integer, if the string is invalid, it will return 0
printf ("Converted number is %d\n", intNumber); //output the converted number
}
}
 while (strcmp (intString, "q") != 0); //program will run until user enter "q"
printf("*** End of Converting Strings to int Demo ***\n\n"); //prints that program ended

/* Version 2 */

/* Version 3 */

}
