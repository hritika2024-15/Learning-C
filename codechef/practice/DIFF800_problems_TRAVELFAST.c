/*Car or Bus
Chef wants to reach home as soon as possible. He has two options:
Travel with his BIKE which takes 
X minutes.
Travel with his CAR which takes Y minutes.
Which of the two options is faster or do they both take same time?*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    if(X>Y){
	        printf("CAR\n");
	    }
	    else if (Y>X){
	        printf("BIKE\n");
	    }
	    else {
	        printf("SAME\n");
	    }
	}
	return 0;

}