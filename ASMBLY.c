#include <stdio.h>

int main(void) {
	// your code goes here
	long int n,i=0,count=0,max=0;
	scanf("%ld",&n);
	long long int a[n];
	for(i=0;i<n;i++)
	{
	    scanf("%lld",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
	    if(a[i]>max)
	    {
	        count++;
	        max=a[i];
	    }
	    
	}
	printf("%ld",count);
	
	return 0;
}

