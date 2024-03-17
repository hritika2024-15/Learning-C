/*Janmansh and Assignments
Janmansh has to submit 3 assignments for Chingari before 10 pm and he starts to do the assignments at 
X pm. Each assignment takes him 1 hour to complete. Can you tell whether he'll be able to complete all assignments on time or not?*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int X,T;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&X);
	    if(X+3<=10){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	}

}