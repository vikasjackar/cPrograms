#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float n,k;
	    scanf("%f %f",&n,&k);
	    int temp=0;
	    temp=ceil(n/k);
	    printf("%d\n",temp);
	}
	return 0;
}

