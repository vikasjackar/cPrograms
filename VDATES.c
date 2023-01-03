#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int d,l,r;
	    scanf("%d %d %d",&d,&l,&r);
	    if(d>=l && d<=r)
	    printf("\nTake second dose now");
	    else if(d<l)
	    printf("\nToo Early");
	    if(d>r)
	    printf("\nToo Late");
	}
	return 0;
}

