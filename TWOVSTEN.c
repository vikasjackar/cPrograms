#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x%10==0)
	    printf("0\n");
	    else if(x%5==0)
	    {
	        printf("1\n");
	    }
	    else
	    printf("-1\n");
	}
	return 0;
}

