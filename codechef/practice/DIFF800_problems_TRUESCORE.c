/*Is the Score Consistent
Chef is watching a football match. The current score is 
A:B, that is, team 
1 has scored 
A goals and team 
2 has scored 
B goals. Chef wonders if it is possible for the score to become 
C:D at a later point in the game (i.e. team 
1 has scored 
C goals and team 
2 has scored 
D goals). Can you help Chef by answering his question?*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,A,B,C,D;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&A,&B);
	    scanf("%d %d",&C,&D);
	    if(A<=C&&B<=D){
	        printf("POSSIBLE\n");
	    }
	    else{
	        printf("IMPOSSIBLE\n");
	    }
	}
	return 0;

}