#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x;
	    scanf("%d %d",&n,&x);
	    int a[n];
	    int b[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    int cost=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>=x)
	        {
	            cost = cost + b[i];
	        }
	    }
	    printf("%d\n",cost);
	}
	return 0;
}

