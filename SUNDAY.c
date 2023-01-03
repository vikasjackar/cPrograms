#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int i=0,count=0;
	    int a[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]%7==6 || a[i]%7==0)
	        {
	            count++;
	        }
	    }
	    printf("%d\n",(n + 8 - count));
	    
	}
	return 0;
}

