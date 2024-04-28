/*
      1
    2 3 2
  3 4 5 4 3
4 5 6 7 6 5 4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
      int n, i, j, k, l;
    scanf("%d", &n);
    for(i=1; i<=n; i++){ 
        for(j=0;j<n-i;j++)
        printf("  "); 
        for(k=i; k<=2*i-1; k++)
        printf("%d ", k); 
        for(l=1; l<i; l++)
   printf("%d ", 2*(i)-l-1);
 
        printf("\n");
    }
    return 0;
}