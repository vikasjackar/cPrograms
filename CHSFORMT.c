#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int sum;
	    sum=a+b;
	    if(sum<3)
	    printf("1\n");
	    else if(sum>=3 && sum<=10)
	    printf("2\n");
	    else if(sum>=11 && sum<=60)
	    printf("3\n");
	    else if(sum>60)
	    printf("4\n");
	}
	return 0;
}

