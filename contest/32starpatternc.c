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
     int n,t,l;
    scanf("%d",&n);
    t=n/2;
    for(int i=-t;i<=t;i++){
        l=abs(i);
    
    for(int s=1;s<=t-l;s++){
        printf("  ");
    }
    for(int j=0;j<=l;j++){
        printf("* ");
    }
    printf("\n");
    }
    return 0;
}