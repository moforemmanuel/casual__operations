#include <stdio.h>
#include <stdlib.h>

long int rev(long int n);
int main(){
 long int num;
 printf("Input n : \n");
 scanf("%ld",&num);
 rev(num);
 printf("\n");
}

long int rev(long int n)
{
	int rem;
	if(n==0)
	return(n);
	else
	{
		rem=n%10;
		printf("%d",rem);
		n/=10;
		rev(n);
	}
}
