/*Qualify the round
In a coding contest, there are two types of problems
Easy problems, which are worth 
1 point each
Hard problems, which are worth 
2 points each
To qualify for the next round, a contestant must score at least 
X points. Chef solved 
A Easy problems and 
B Hard problems. Will Chef qualify or not?*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,A,B;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&X,&A,&B);
	    if(X<=A+(2*B)){
	        printf("qualify\n");
	    }
	    else{
	        printf("notqualify\n");
	    }
	}
return 0;
}