#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d %d",&x,&y);
        if(x<y)
        printf("PROFIT\n");
        else if(x>y)
        printf("LOSS\n");
        else
        printf("NEUTRAL\n");
    }
	return 0;
}

