#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int b[n];
	    int i=0,temp=0,count=0;
	    a[0]=0;
	    for(i=1;i<=n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=1;i<=n;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    for(i=1;i<=n;i++)
	    {
	        temp=a[i] - a[i-1];
	        if(b[i]<=temp)
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

