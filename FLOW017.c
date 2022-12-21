#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b && a>=c)
	{
	    a=0;
	}
	else if(b>=a && b>=c)
	{
	    b=0;
	}
	else
	c=0;
	
	if(a>=b && a>=c)
	{
	    printf("%d\n",a);
	}
	else if(b>=a && b>=c)
	{
	    printf("%d\n",b);
	}
	else
	printf("%d\n",c);
	}
	return 0;
}

