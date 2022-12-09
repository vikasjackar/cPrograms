#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,max;
	    scanf("%d %d %d",&a,&b,&c);
	    if(a>=b && c>=b)
	    max=a+c;
	    else if(b>=a && c>=a)
	    max=b+c;
	    else
	    max=a+b;
	    printf("%d\n",max);
	    
	    
	}
	return 0;
}

