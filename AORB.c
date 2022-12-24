#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int temp1,temp2;
	    temp1=500-(x*2) + 1000-((x+y)*4);
	    temp2=1000-(y*4) + 500-((x+y)*2);
	    if(temp1>temp2)
	    printf("%d\n",temp1);
	    else
	    printf("%d\n",temp2);

	}
	return 0;
}

