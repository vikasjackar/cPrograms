#include <stdio.h>

int main(void) {
	// your code goes here
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
	    double n;
	    long int x1,x2,x3,x4,x5,x6;
	    scanf("%lf %ld %ld %ld %ld %ld %ld",&n,&x1,&x2,&x3,&x4,&x5,&x6);
	    long int temp;
	    temp=ceil(n/2);
	    temp= temp * (x1+x2+x3+x4+x5+x6);
	    printf("%ld\n",temp);
	    
	}
	return 0;
	
}

