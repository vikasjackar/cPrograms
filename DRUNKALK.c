#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int k;
	    scanf("%d",&k);
	    if(k%2==0)
	    {
	        printf("%d\n",(k/2)*2);
	    }
	    else
	    printf("%d\n",(k/2)*2 + 3);
	}
	return 0;
}

