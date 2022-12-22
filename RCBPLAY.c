#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    if((x + z*2)>=y || (x + z*1)>=y)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

