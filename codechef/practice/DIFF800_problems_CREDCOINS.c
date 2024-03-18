/*CRED Coins
For each bill you pay using CRED, you earn 
X CRED coins.
At CodeChef store, each bag is worth 100 CRED coins.
Chef pays Y number of bills using CRED. Find the maximum number of bags he can get from the CodeChef store.
Input Format
First line will contain T, number of test cases. Then the test cases follow.
Each test case contains of a single line of input, two integers 
X and Y.
Output Format
For each test case, output in a single line - the maximum number of bags Chef can get from the CodeChef store.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    int result=X*Y/100;
	    printf("%d\n",result);
	    
	}
	return 0;

}
