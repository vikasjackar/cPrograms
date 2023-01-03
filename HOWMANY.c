#include <stdio.h>

int main(void) {
	// your code goes here
	int n;
	scanf("%d",&n);
	int count=0;
	while(n!=0)
	{
	    count++;
	    n=n/10;
	}
	if(count<4)
	printf("%d\n",count);
	else
	printf("More than 3 digits\n");
	return 0;
}

