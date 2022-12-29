#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if(z<(x+y))
	    {
	        printf("TRAIN\n");
	    }
	    else if(z>(x+y))
	    {
	        printf("PLANEBUS\n");
	    }
	    else
	    {
	        printf("EQUAL\n");
	    }
	}
	return 0;
}

