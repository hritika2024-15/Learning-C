/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
     int n;
    scanf("%d",&n);
  for(int i=1;i<=n;i++){
      for(int s=1;s<=(n-i);s++){
          printf("  ");
      }
       for(int k=i;k>1;k--){
          printf("%d ",k);
      }
      for(int j=1;j<=i;j++){
          printf("%d ",j);
      }
     
      printf("\n");
  }
    return 0;
}
