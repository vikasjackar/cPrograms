#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,a,b,c;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d",&a);
	    b=a/7;
	    c=a%7;
	    if(c==6)
	    {printf("%d\n",b+1);}
	    else
	    {printf("%d\n",b);}
	}
	return 0;
}

