#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if(a>0 && b>0)
	    printf("Solution\n");
	    else if(b==0)
	    printf("Solid\n");
	    else if(a==0)
	    printf("Liquid\n");
	}
	return 0;
}

