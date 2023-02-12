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
	    int i=0,sum=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        sum=sum+a[i];
	    }
	    if(sum%2==0)
	    printf("NO\n");
	    else
	    printf("YES\n");
	    
	}
	return 0;
}

