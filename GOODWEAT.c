#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a[7];
	    int i=0,s=0,r=0;
	    for(i=0;i<7;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]==1)
	        {
	        s++;
	        }
	        else
	        {
	            r++;
	        }     
	    }
	    if(s>r)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	    printf("NO\n");
	    }
	}
	return 0;
	
}