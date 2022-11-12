#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long n;
	    scanf("%ld",&n);
	    int A[n],i,min,temp,max;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&A[i]);
	    }
	    min=A[0];
	    max=A[0];
	    for(i=0;i<n;i++)
	    {
	        if(A[i]<min)
	        {
	            min=A[i];
	        }
	        if(A[i]>max)
	        {
	            max=A[i];
	        }
	    }
	   // printf("%d %d",max,min);
	   // printf("\n");
	   temp=max;
	    for(i=0;i<n;i++)
	    {
	        if(A[i]!=min && A[i]<temp)
	        {
	            temp=A[i];
	        }
	    }
	    printf("\n%d",temp);
	    
	}
	return 0;
}

