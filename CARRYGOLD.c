#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,y;
	    scanf("%d %d %d",&n,&x,&y);
	    int temp;
	    temp=y*(n+1);
	    if(x<=temp)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

