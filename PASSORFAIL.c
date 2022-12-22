#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,p;
	    scanf("%d %d %d",&n,&x,&p);
	    int score;
	    score = x*3 - (n-x);
	    if(score>=p)
	    printf("PASS\n");
	    else
	    printf("FAIL\n");
	}
	return 0;
}

