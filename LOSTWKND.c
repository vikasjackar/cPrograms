#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a1,a2,a3,a4,a5,p;
	    scanf("%d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&p);
	    int sum=0;
	    sum=(a1+a2+a3+a4+a5)*p;
	    if(sum<=(24*5))
	    printf("No\n");
	    else
	    printf("Yes\n");
	}
	return 0;
}

