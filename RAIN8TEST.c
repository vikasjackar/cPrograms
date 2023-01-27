#include <stdio.h>

int main(void) {
	// your code goes here
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
	    long long int n,x;
	    scanf("%ld %ld",&n,&x);
	    long int d[n];
	    long int i=0,count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%ld",&d[i]);
	    }
	    if(d[0]==1)
	    count=count+x;
	    else 
	    count=0;
	    
	    for(i=1;i<n;i++)
	    {
	        if(d[i]==1 || d[i - 1]==1)
	        count=count + x;
	    }
	    printf("%ld\n",count);
	}
	return 0;
}

