/*Chef in his Office
Recently Chef joined a new company. In this company, the employees have to work for 
X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for 
Y hours (Y<X) on Friday. Saturdays and Sundays are holidays
Determine the total number of working hours in one week.*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,X,Y;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d",&X,&Y);
	    printf("%d\n",X*4+Y);
	}

}