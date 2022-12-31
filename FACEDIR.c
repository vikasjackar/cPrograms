#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x%4==0)
	    printf("North\n");
	    else if(x%4==1)
	    printf("East\n");
	    else if(x%4==2)
	    printf("South\n");
	    else
	    printf("West\n");
	}
	return 0;
}

