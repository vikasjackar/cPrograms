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
	    int i=0,count=0,temp=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0; i<n-1; i++)
	    {
	        if(a[i]>a[i+1])
	        {
	            temp= a[i+1];
	            a[i+1]= a[i];
	            a[i]= temp;
	            break;
	        }
	    }
	    for(i=0; i<n-1; i++)
	        if(a[i]>a[i+1])
	            count++;
	    if(count==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

