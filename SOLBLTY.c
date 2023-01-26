#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,a,b;
	    scanf("%d %d %d",&x,&a,&b);
	    int temp;
	    temp=a + (100-x)*b ;
	    temp= temp*10;
	    printf("%d\n",temp);
	}
	return 0;
}

