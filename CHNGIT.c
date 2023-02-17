#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,j,k,c;
	    scanf("%d",&n);
	    int a[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    int b[n];
	    for(i=0;i<n-1;i++)
	    {
	        c=1;
	        for(j=i+1;j<n;j++)
	        {
	            if(a[i]==a[j])
	            c++;
	        }
	        b[i]=c;
	    }
	    int max=b[0];
	    for(k=0;k<n-1;k++)
	    {
	        if(b[k]>max)
	        max=b[k];
	    }
	    printf("%d\n",n-max);
	    
	}
	return 0;
}

