#include <stdio.h>

int main(void) {
	// your code goes here
	signed int a,b;
	char s;
	scanf("%d %d %c",&a,&b,&s);
	if(s=='+')
	{
	    printf("%d\n",(a + b));
	}
	else if(s=='-')
	{
	    printf("%d\n",(a - b));
	}
	else if(s=='*')
	{
	    printf("%d\n",(a * b));
	}
	else if(s=='/')
	{
	    printf("%.7f\n",(1.0*a) / b);
	}
	
	return 0;
}