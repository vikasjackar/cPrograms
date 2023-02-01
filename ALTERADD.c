#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d%d",&a,&b);
	    
	    if((b-a)%3==2)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

