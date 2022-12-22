#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    if((x+y)%2==0)
	    printf("Janmansh\n");
	    else
	    printf("Jay\n");
	}
	return 0;
}

