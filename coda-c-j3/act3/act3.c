#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>
#include <math.h>
#include <libm.a>


int Premier(int n) {
    if (n <= 1) {
           return 0;
       }
       if (n == 2) {
           return 1; 
       }
       if (n % 2 == 0) {
           return 0; 
       }

       
       for (int i = 3; i <= sqrt(n); i += 2) {
           if (n % i == 0) {
               return 0; 
           }
       }

       return 1;
} 



int main()
{
	int fib1=0;
	int fib2=1;
	int fib3;
	int i=0;


	while(i<21) {
	fib3=fib2;
	fib2=fib1+fib2;
	fib1=fib3;
	printf("%d %d %d\n", fib1, fib2, fib3);
	i=i+1;}

	int prem=0;
	while(prem==0) {
	prem=Premier(fib2);
	fib2=fib2+1;}
printf("%d", fib2);
exit(0);
}
	

