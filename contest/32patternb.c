/*
        1
      1   1
    1   2   1
  1   3   3   1
1   4   6   4   1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
      int n,temp=1;
    scanf("%d",&n);
 for(int i=0;i<n;i++){
     for(int s=2;s<=n-i;s++){
         printf("  ");
     }
     for(int j=0;j<=i;j++){
         if(i==0||j==0){
              temp=1;
         }
         else{
             temp=temp*(i-j+1)/j;
         }
         printf("%d   ",temp);
     }
     printf("\n");
 }
    return 0;
}