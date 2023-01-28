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
	    int temp[n];
	    int i=0,j=0,m=0,sum=0,max=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        sum=0;
	        if((i+k)<=n)
	        {
    	        for(j=i;j<(i+k);j++)
    	        {
    	            sum=sum+a[j];
    	        }
    	        temp[m]=sum;
    	        m++;
	        }
	        else
	        {
    	        temp[m]=sum;
    	        m++;
    	        break;
	        }
	    }
	    max=temp[0];
	    for(i=0;i<m;i++)
	    {
	        if(max<temp[i])
	        max=temp[i];
	       //printf("%d ",temp[i]);
	    }
	    printf("%d\n",max);
	    
	}
	return 0;
}

