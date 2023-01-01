#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x1,x2,x3,y1,y2,y3;
	    scanf("%d %d %d %d %d %d",&x1,&x2,&x3,&y1,&y2,&y3);
	    if((x1+x2+x3)>(y1+y2+y3))
	    printf("1\n");
	    else
	    printf("2\n");
	}
	return 0;
}

