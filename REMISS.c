
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a<b)
	    {
	        printf("%d ",b);
	    }
	    else
	    {
	        printf("%d ",a);
	    }
	    printf("%d\n",b+a);
	}
	return 0;
}


