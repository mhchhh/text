#include<stdio.h>

int main()
{
	
    int x;
    
	printf("please input a number:");
    
    scanf("%d",&x);
    
    int i;
    
    int isPrime = 1 ;  // x is prime number
    
	
	for ( i=2; i<x; i++ ) {
	    
		if ( x % i == 0 ) {
			isPrime = 0 ;
			break ;
		} 
	 }
    
    if ( isPrime == 1 ) {
    	printf("%d is a prime number", x );
	}
    else { 
        printf("%d is not a prime number", x );
			}
			
			return 0;
} 

