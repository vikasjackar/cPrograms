#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,x;
	    scanf("%ld %ld",&n,&x);
	    if(n%2==0)
	    {
	        printf("YES\n");
	    }
	    else 
	    {
	        if(x%2==0)
	        {
	            printf("NO\n");
	        }
	        else
	        printf("YES\n");
	    }
	}
	return 0;
}

