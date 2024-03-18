/*Expert Setter
A problem setter is called an expert if at least 
50% of their problems are approved by Chef.
Munchy submitted 
X problems for approval. If 
Y problems out of those were approved, find whether Munchy is an expert or not.*/
#include <stdio.h>

int main() {
	// your code goes here
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    if(Y>=X/2.0){
	        printf("YES\n");
	    }
	    else{
	        printf("NO\n");
	    }
	}
	return 0;

}
