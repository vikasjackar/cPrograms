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
	    int i=0,sum1=0,sum2=0,max1=0,max2=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        sum1=sum1+a[i];
	        if(a[i]>max1)
	        {
	            max1=a[i];
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	        sum2=sum2+b[i];
	        if(b[i]>max2)
	        {
	            max2=b[i];
	        }
	    }
	    sum1=sum1-max1;
	    sum2=sum2-max2;
	    if(sum1>sum2)
	    printf("Bob\n");
	    else if(sum1<sum2)
	    printf("Alice\n");
	    else
	    printf("Draw\n");
	    
	}
	return 0;
}

