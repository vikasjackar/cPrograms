#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int i=0;
	    for(i=n;i>0;i--)
	    {
	        printf("%d ",i);
	    }
	    printf("\n");
	}
	return 0;
}

