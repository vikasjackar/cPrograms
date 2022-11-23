#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,max,min;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>=b && a>=c)
	    max=a;
	    else if(b>=a && b>=c)
	    max=b;
	    else
	    max=c;
	    
	    if(a<=b && a<=c)
	    min=a;
	    else if(b<=a && b<=c)
	    min=b;
	    else
	    min=c;
	    printf("\n%d",(max-min));
	}
	return 0;
}

