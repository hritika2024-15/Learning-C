/*
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
scanf("%d",&n);//taking input for number of rows
for(int i=1;i<=n;i++){
    for(int j=1;j<=n-i;j++){
        printf("  ");
    
    }
    for(int k=1;k<=i;k++){
        printf("* ");
    }
    printf("\n");
}
    return 0;
}