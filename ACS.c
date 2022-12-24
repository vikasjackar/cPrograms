#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int p;
	    scanf("%d",&p);
	    int count=0;
	    count= (p/100) + (p%100);
	    if(count>10)
	    {
	        printf("-1\n");
	    }
	    else
	    printf("%d\n",count);
	}
	return 0;
}

