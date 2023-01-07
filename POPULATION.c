#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    printf("%d\n",(x-y+z));
	}
	return 0;
}

