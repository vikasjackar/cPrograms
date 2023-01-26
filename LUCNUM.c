#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n;
	    scanf("%ld",&n);
	    int count=0;
	    while(n%2==0)
	    {
	        count++;
	        n=n/2;
	        if(n%2==0)
	        {
	            count++;
	            n=n/2;
	        }
	        
	        if(n%2==0)
	        {
	            count++;
	            n=n/2;
	        }
	    }
	    if(count%2==0)
	    printf("1\n");
	    else 
	    printf("0\n");
	}
	
	return 0;
}

