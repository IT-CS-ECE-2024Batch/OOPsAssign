#include <stdio.h>

void fib(int n){    
    static int n1=0,n2=1,n3;    
    if(n>2){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d ",n3);    
         fib(n-1);    
    }    
}    

__int32_t main()
{
    int n;
    int a, b;
    printf("Upto how many numbers : ");
    scanf("%d", &n);
    printf("%d %d ",0,1);    
    fib(n);
}
