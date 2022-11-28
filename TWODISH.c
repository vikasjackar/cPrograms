#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a,b,c,dish;
	    scanf("%d %d %d %d",&n,&a,&b,&c);
	    if(a>b || c>b)
	    dish=b;
	    else if(b>a && b>c)
	    {
	        if((a+c)>b)
	        dish=b;
	        else
	        dish=(a+c);
	    }
	    else
	    dish=b;
	    
	    if(dish>=n)
	    printf("\nYES");
	    else
	    printf("\nNO");
	    
	}
	return 0;
}

