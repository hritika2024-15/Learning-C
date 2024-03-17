/*Outputting Characters from a String
We can access the characters in a string by referring to its index number inside square brackets [].
We use the concept of indexing which means every character in a string corresponds to a number called the index number
Task
Write a program which does the following

Create a string variable word and assign the text "Programming" to it
Print the characters o and r from the string word in separate lines using the syntax defined above*/
#include <stdio.h>

int main() {

    char word[] = "Programming";
    printf("%c\n", word[ 2 ]);
    printf("%c\n",word[4]);

}