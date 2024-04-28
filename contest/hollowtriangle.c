/*
     *
    * *
   *   *
  *     *
 *       *
* * * * * *
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
scanf("%d",&n);//taking number of rows as input
for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){//loop for printing spaces
        printf(" ");
    }
    for(int j=1;j<=i;j++){//loop for printing stars
        if(j==1||i==n||i==j){
            printf("* ");
            
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}
    return 0;
}