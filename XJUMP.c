#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,moves;
	    scanf("%d %d",&x,&y);
	    moves=(x/y)+(x%y);
	    printf("\n%d",moves);
	}
	return 0;
}

