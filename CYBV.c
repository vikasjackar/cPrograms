#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    printf("%d\n",b/a);
	    t-=1;
	}
	return 0;
}

