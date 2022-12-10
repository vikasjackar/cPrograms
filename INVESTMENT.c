#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if(x<(2*y))
	    printf("\nNO");
	    else
	    printf("\nYES");
	}
	return 0;
}

