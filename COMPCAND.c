#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    if(n%k==0)
	    printf("%d\n",(n/k));
	    else
	    printf("-1\n");
	}
	return 0;
}

