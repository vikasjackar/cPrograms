#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c,d;
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if(b>a)
	    a=a+c;
	    else
	    b=b+c;
	    
	    if(b>a)
	    a=a+d;
	    else
	    b=b+d;
	    
	    if(b>a)
	    printf("S\n");
	    else
	    printf("N\n");
	}
	return 0;
}

