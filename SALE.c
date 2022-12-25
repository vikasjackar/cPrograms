#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int min;
	    if(b<=a && b<=c)
	    min=b;
	    else if(c<=a && c<=b)
	    min=c;
	    else
	    min=a;
	    
	    printf("%d\n",(a+b+c)-min);
	}
	return 0;
}

