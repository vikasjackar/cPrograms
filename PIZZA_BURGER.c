#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(y<=x)
	    printf("PIZZA\n");
	    else if(y>x && z<=x)
	    printf("BURGER\n");
	    else
	    printf("NOTHING\n");
	}
	return 0;
}

