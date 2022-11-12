#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long h,x,y;
	    scanf("%ld %ld %ld",&h,&x,&y);
	    if((x-y)>0)
	    printf("\n1");
	    else
	    printf("\n0");
	}
	return 0;
}

