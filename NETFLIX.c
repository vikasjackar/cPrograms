#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,x;
	    scanf("%d %d %d %d",&a,&b,&c,&x);
	    if((a+b)>=x || (c+b)>=x || (a+c)>=x)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

