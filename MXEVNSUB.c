#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,sum;
	    scanf("%d",&n);
	    sum=(n*(n+1))/2;
	    if(sum%2==0)
	    printf("\n%d",n);
	    else
	    printf("\n%d",(n-1));
	}
	
	return 0;
}

