#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int z,y,a,b,c;
	    scanf("%d %d %d %d %d",&z,&y,&a,&b,&c);
	    int sum;
	    sum=a+b+c;
	    if((z-y)>=sum)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

