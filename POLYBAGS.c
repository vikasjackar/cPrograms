#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float n;
	    scanf("%f",&n);
	    int temp;
	    temp=ceil(n/10);
	    printf("%d\n",temp);
	}
	return 0;
}

