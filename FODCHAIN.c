#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int e,k;
	    scanf("%d %d",&e,&k);
	    int count=0;
	    while(e!=0)
	{
	    e=e/k;
	    count++;
	}
	printf("%d\n",count);
	}
	return 0;
}

