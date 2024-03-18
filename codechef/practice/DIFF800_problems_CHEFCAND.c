/*Chef and Candies
There are 
N children and Chef wants to give them 
1 candy each. Chef already has 
X candies with him. To buy the rest, he visits a candy shop. In the shop, packets containing exactly 
4 candies are available.
Determine the minimum number of candy packets Chef must buy so that he is able to give 
1 candy to each of the N children.*/
#include <stdio.h>
#include<math.h>

int main() {
	// your code goes here
	int T,N,X;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&N,&X);
	    if(N>X){
	        int result = ceil((N-X)/4.0);
	        printf("%d\n",result);
	    }
	    else{
	        printf("0\n");
	    }
	}
	return 0;

}