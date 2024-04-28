/*
0
1 1
2 3 5
8 13 21
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int n,a=0,b=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            printf("%d ",a);
            int t=a+b;
            a=b;
            b=t;
            if(a>21) break;
        }
        printf("\n");
    }
    return 0;
}