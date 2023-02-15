#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    int temp,count=0;
	    temp=10*x;
	    if(y<=temp)
	    {
	        count=y*z;
	    }
	    else
	    {
	        count=temp*z;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

