#include <stdio.h>

int main(void) {
	// your code goes here
	long int t;
	scanf("%ld",&t);
	while(t--)
	{
	    long int n,k;
	    scanf("%ld %ld",&n,&k);
	    int a[n];
	    int i=0,count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]>k)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

