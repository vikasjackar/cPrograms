#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a;
	    scanf("%d %d",&n,&a);
	    int temp=0;
	    temp=(n-a);
	    if(temp<a)
	    printf("%d\n",temp);
	    else
	    printf("%d\n",a);
	}
	return 0;
}

