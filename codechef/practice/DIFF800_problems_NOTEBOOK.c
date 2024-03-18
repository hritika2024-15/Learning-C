/*Count the Notebooks
You know that 
1 kg of pulp can be used to make 
1000 pages 1 notebook consists of 100 pages.
Suppose a notebook factory receives 
N kg of pulp, how many notebooks can be made from that?*/
#include <stdio.h>

int main() {
	// your code goes here
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int notebook=10*N;
	    printf("%d\n",notebook);
	}
	return 0;

}