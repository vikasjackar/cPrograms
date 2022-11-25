#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,a1,b1,a2,b2;
	    scanf("%d %d %d %d %d %d",&a,&b,&a1,&b1,&a2,&b2);
	    if((a==a1 && b==b1) || (a==b1 && b==a1))
	    printf("\n1");
	    else if((a==a2 && b==b2) || (a==b2 && b==a2))
	    printf("\n2");
	    else
	    printf("\n0");
	    
	}
	return 0;
}

