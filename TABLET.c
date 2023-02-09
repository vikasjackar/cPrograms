#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,b;
	    scanf("%d %d",&n,&b);
	    int w[n];
	    int h[n];
	    int p[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d %d %d",&w[i],&h[i],&p[i]);
	    }
	    int temp[n];
	    int k=0,flag=0,max=0;
	    
	    for(i=0;i<n;i++)
	    {
	        if(p[i]<=b)
	        {
	            flag=1;
	            temp[k]=w[i]*h[i];
	            k++;
	        }
	    }
	    if(flag==0)
	    printf("no tablet\n");
	    else 
	    {
	        max=temp[0];
	        for(i=0;i<k;i++)
	        {
	            if(temp[i]>max)
	            max=temp[i];
	        }
	        printf("%d\n",max);
	    }
	    
	}
	
	return 0;
}

