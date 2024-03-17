/*Displaying the count of elements
To get the size of an array, you can use the sizeof() operator:
Write a program which does the following

Create an integer array containing the elements - 10, 20, 30, 40, 50, 60
Compile and output to the console the accurate count of the number of integer elements in the given array.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int num[6]={10,20,30,40,50,60};
	printf("%d",sizeof(num)/sizeof(num[0]));

}
