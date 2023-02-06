#include <stdio.h>

int main(void) {
	// your code goes here
	int l;
	scanf("%d",&l);
	int b;
	scanf("%d",&b);
	int a=0,p=0;
	a=(l*b);
	p=2*(l+b);
	if(a<p)
	{
	    printf("Peri\n");
	    printf("%d\n",p);
	}
	else if(a>p)
	{
	    printf("Area\n");
	    printf("%d\n",a);
	}
	else
	{
	    printf("Eq\n");
	    printf("%d\n",p);
	}

	return 0;
}

