#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int n,x,y;
	    scanf("%d%d%d",&n,&x,&y);
	    
	    if ((x*y)>=n)
	    {
	        printf("Yes\n");
	    }
	    else
	    {
	    printf("No\n");
	    }
	}
	return 0;
}

