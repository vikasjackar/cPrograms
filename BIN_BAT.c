#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a,b;
	    scanf("%d %d %d",&n,&a,&b);
	    int i;
	    for(i=1;i<=20;i++)
	    {
	        if(pow(2,i)==n)
	        break;
	    }
	    int x;
	    x=(i*a)+((i - 1)*b);
	    printf("%d\n",x);
	}
	return 0;
}

