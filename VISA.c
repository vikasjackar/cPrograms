#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x1,x2,y1,y2,z1,z2;
	    scanf("%d %d %d %d %d %d",&x1,&x2,&y1,&y2,&z1,&z2);
	    if(x2>=x1 && y2>=y1 && z2<=z1)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

