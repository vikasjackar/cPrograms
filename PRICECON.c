#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int a[n];
	    int i=0,sum=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]>k)
	        {
	            sum=sum+(a[i]-k);
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

