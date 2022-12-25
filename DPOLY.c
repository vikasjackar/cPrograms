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
	    int i=0,count;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=(n-1);i>=0;i--)
	    {
	        if(a[i]!=0)
	        {
	            count=i;
	            break;
	        }
	    }
	    printf("%d\n",count);
	}
	return 0;
}

