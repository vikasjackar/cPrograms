#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int i=0,fact=1;
	    if(n<=1)
	    {
	        printf("%d\n",fact);
	    }
	    else
	    {
	        for(i=2;i<=n;i++)
	        {
	            fact=fact*i;
	        }
	        printf("%d\n",fact);
	    }
	    
	}
	return 0;
}

