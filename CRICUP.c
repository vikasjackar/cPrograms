#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,d;
	    scanf("%d %d %d",&x,&y,&d);
	    int diff;
	    diff=abs(x-y);
	    if(diff<=d)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

