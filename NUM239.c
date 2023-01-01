#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int l,r;
	    scanf("%d %d",&l,&r);
	    int i=0,count=0;
	    for(i=l;i<=r;i++)
	    {
	        if(i%10==2 || i%10==3 || i%10==9)
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

