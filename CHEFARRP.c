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
	    int i=0,j=0,count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        int s=0,p=1;
	        for(j=i;j<n;j++)
	        {
	            s=s+a[j];
	            p=p*a[j];
	            if(s==p)
	            {
	                count++;
	            }
	        }
	    }
	    printf("%d\n",count);
	}
	
	return 0;
}

