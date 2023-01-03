#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int H,x,y,C;
	    scanf("%d %d %d %d",&H,&x,&y,&C);
	    int temp;
	    temp=floor(y/2);
	    temp= H*(x+temp);
	    if(temp<=C)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

