#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,y;
	    scanf("%d %d %d",&n,&x,&y);
	    if(y<=(n*x))
	    {
	        if(y%x==0)
	        printf("\nYES");
	        else
	        printf("\nNO");
	    }
	}
	return 0;
}

