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
	    int temp[n];
	    int i=0,k=0;
	    int count=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]!=0 && b[i]!=0)
	        {
	            count++;
	            temp[k]=count;
	            k++;
	        }
	        else
	        {
	            count=0;
	            temp[k]=0;
	            k++;
	        }
	    }
	    int max;
	    max=temp[0];
	    for(i=0;i<k;i++)
	    {
	        if(temp[i]>max)
	        max=temp[i];
	    }
	    printf("%d\n",max);
	}
	return 0;
}

