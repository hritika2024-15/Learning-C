/*Exams
In Chefland, there are 
X schools, and each school has Y students.
The year end results are in and a total of Z students passed the exams.Assuming that all students appeared for the exams, 
find whether the number of students who passed in Chefland was strictly greater than 50%.*/
#include <stdio.h>

int main() {
	// your code goes here
	int T,X,Y,Z;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&X,&Y,&Z);
	    if(Z>X*Y/2){
	        printf("yes\n");
	    }
	    else{
	        printf("no\n");
	    }
	   
	}
	return 0;
	   

}