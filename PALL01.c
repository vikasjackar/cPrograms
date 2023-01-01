#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int count,temp=0;
	    count=n;
	    while(n!=0)
	    {
	        temp= temp*10 + (n%10);
	        n=n/10;
	    }
	    if(count==temp)
	    printf("wins\n");
	    else
	    printf("loses\n");
	}
	return 0;
}

