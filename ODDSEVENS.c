#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    if((a+b)%2==0)
	    printf("Bob\n");
	    else
	    printf("Alice\n");
	}
	return 0;
}

