#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d",&n);
	    m=2*n;
	    long int a[m];
	    int i=0,j=0,count,flag=0;
	    for(i=0;i<m;i++)
	    {
	        scanf("%ld",&a[i]);
	    }
	    for(i=0;i<m;i++)
	    {
	        count=1;
	        for(j=(i+1);j<m;j++)
	        {
	            if(a[i]==a[j])
	            {
	                count++;
	            }
	        }
	        if(count>2)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    printf("Yes\n");
	    else
	    printf("No\n");
	}
	return 0;
}

