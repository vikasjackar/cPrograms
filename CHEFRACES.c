#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,a,b;
	    scanf("%d %d %d %d",&x,&y,&a,&b);
	    int count=2;
	    if(x==a || x==b)
	    {
	        count--;
	    }
	    if(y==a || y==b)
	    {
	        count--;
	    }
	    printf("%d\n",count);
	}
	return 0;
}

