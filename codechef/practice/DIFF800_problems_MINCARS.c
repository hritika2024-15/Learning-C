/*Minimum Cars required
A single car can accommodate at most 
4 people.
N friends want to go to a restaurant for a party. Find the minimum number of cars
required to accommodate all the friends.*/
#include <stdio.h>
#include <math.h>

int main() {
	// your code goes here
	int T,N;
	scanf("%d",&T);
	while(T--){
	    scanf("%d",&N);
	    int car=ceil(N/4.0);
	    printf("%d\n",car);
	}
	return 0;

}

