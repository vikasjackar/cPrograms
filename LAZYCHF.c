#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,m,d;
	    scanf("%d %d %d",&x,&m,&d);
	    if(d==0)
	    printf("%d\n",x);
	    else if((x*m)<(x+d))
	    printf("%d\n",(x*m));
	    else
	    printf("%d\n",(x+d));
	}
	return 0;
}

