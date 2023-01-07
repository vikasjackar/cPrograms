#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    if((n+1)<=k)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

