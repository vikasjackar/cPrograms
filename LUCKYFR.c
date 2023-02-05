#include <stdio.h>

int main(void) {
	// your code goes here
	int count,i,j,n,t;
	scanf("%d",&t);
	while(t-->0)
	{
	    count=0;
	    scanf("%d",&n);
	    while(n>0)
	    {
	        if(n%10==4)
	        {
	            count++;
	        }
	        n=n/10;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

