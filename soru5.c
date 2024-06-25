#include <stdio.h>
int main ()

 {   
  int n, i;
    double sum = 0;
    
    printf("Enter a positive integer:");
    scanf("%d", &n);
    
    for (i=1;i<=n;i++) {
        sum =  sum + (double)i*(n % i)*(n % i);
           }
    
     printf("f(%d) = %.4f\n", n, sum);
    
    return 0;
}
