#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int A[n],i,sum1=0,sum2=0,flag=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&A[i]);
	        sum1=sum1+A[i];
	    }
	    for(i=0;i<n;i++)
	    {
	        sum2=sum2+A[i];
	        sum1=sum1-A[i];
	        if((sum1*sum2)%2!=0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        printf("YES\n");
	    }
	    else
	    printf("NO\n");
	}
	return 0;
}

