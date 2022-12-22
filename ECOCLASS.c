#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int s[n];
	    int d[n];
	    int i=0,count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&s[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&d[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(s[i]==d[i])
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

