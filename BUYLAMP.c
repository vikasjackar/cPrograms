#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,x,y;
	    scanf("%d %d %d %d",&n,&k,&x,&y);
	    int temp;
	    temp= (k*x);
	    if(x>y)
	    temp=temp + (n-k)*y;
	    else
	    temp=temp + (n-k)*x;
	    
        printf("%d\n",temp);
	}
	return 0;
}

