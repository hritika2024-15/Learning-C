/*Sale Season
It's the sale season again and Chef bought items worth a total of 
X rupees. The sale season offer is as follows:
if X≤100, no discount.
if 100<X≤1000, discount is 25 rupees.
if 1000<X≤5000, discount is 100 rupees.
if X>5000, discount is 500 rupees.
Find the final amount Chef needs to pay for his shopping.
Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of single line of input containing an integer X.
Output Format
For each test case, output on a new line the final amount Chef needs to pay for his shopping.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&X);
	    if(X<=100){
	        printf("%d\n",X);
	        
	    }
	    else if(X>100&&X<=1000){
	        printf("%d\n",X-25);
	    }
	    else if(X>1000&&X<=5000){
	        printf("%d\n",X-100);
	    }
	    else {
	        printf("%d\n",X-500);
	    }
	    
	}
	return 0;

}