#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,n,k;
	    scanf("%d %d %d",&m,&n,&k);
	    if((n*k)<m)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	
	return 0;
}

