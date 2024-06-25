#include <stdio.h> 
int main ( void )
{ 
     int is_prime(int x); 
  int sum , i , x, upperlimit , lowerlimit;
  
  printf("Enter upper limit:");
  scanf("%d",&upperlimit);
  
  printf("Enter lower limit:");
  scanf("%d",&lowerlimit);
  
 
 {
  sum=0;
  for(i=lowerlimit ; i<=upperlimit; i++) {
  	 
	
  	if (is_prime(i)){
	  
	   
  	sum = sum + i;
  }
  }
   printf("The sum of all prime numbers between %d and %d is %d \n", lowerlimit , upperlimit , sum);
}
     return 0;
			
		}
		
		int is_prime( int x) {
    int i;

    if (x <= 1)
	 {
        return 0;
    }

    for (i = 2; i <= x / 2; i++) {
        if (x % i == 0) {
            return 0;
                  }
    }

    return 1;
}
   




