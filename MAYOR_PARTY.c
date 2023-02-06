#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    if(b<(a+c))
	    printf("%d\n",(a+c));
	    else 
	    printf("%d\n",b);
	}
	return 0;
}

