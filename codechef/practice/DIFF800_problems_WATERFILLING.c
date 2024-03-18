/*Water Filling
Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.

You are given three integersB1,B2,B3
 =1, it means that the first bottle is full.
 =0, it means that the first bottle is empty. 
Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".
Input Format
The first line of input will contain a single integer 
T, denoting the number of test cases.
The only line of each test case contains three space-separated integers,B1,B2,B3 
Output Format
For each test case, output on a new line, either "Water filling time", or "Not now".*/
#include <stdio.h>

int main(void) {
	// your code goes here
	int T,B1,B2,B3;
	scanf("%d",&T);
	while(T--){
	    scanf("%d %d %d",&B1,&B2,&B3);
	    if(B1==0&&B2==0&&B3==0){
	        printf("Water filling time\n");
	    }
	    else if(B1==0&&B2==0||B2==0&&B3==0||B3==0&&B1==0){
	        printf("Water filling time\n");
	    }
	    else{
	        printf("Not now\n");
	    }
	}
	return 0;

}
