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
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int count=7,k=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==1 || a[i]==2 || a[i]==3 || a[i]==4 || a[i]==5 || a[i]==6 || a[i]==7)
	        {
	            count--;
	        }
	        if(count==0)
	        {
	            k=i;
	            break;
	        }
	    }
	    printf("%d\n",(k + 1));
	}
	return 0;
}

