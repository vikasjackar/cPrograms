#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d %d",&n,&m);
	    int temp=0;
	    if(n>=m)
	    {
	        temp=n-m;
	    }
	    else
	    {
	        temp=0;
	    }
	    printf("%d\n",(n + temp));
	}
	return 0;
}

