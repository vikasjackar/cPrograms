#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,k;
	    scanf("%d %d %d",&x,&y,&k);
	    int step,diff;
	    diff=abs(y-x);
	    step=diff/k;
	    if(diff%k==0)
	    printf("%d\n",step);
	    else
	    printf("%d\n",(step + 1));
	}
	return 0;
}

