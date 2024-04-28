/*

* * * * *
 * * * *
  * * *
   * * 
    *
   * *
  * * *
 * * * *
* * * * *

*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
int n;
scanf("%d",&n);//taking no.of rows as input
for(int i=-n+1;i<=n-1;i++){
    int l=abs(i);
    for(int s=1;s<n-l;s++){//loop to print spaces
        printf(" ");
    }
    for(int j=0;j<l+1;j++){//loop to print stars
        printf("* ");
    }
    printf("\n");
}
    return 0;
}