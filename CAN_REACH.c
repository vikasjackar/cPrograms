#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a,b,c;
	scanf("%d",&n);
	while(n--)
	{
	    scanf("%d %d %d",&a,&b,&c);
	    printf("%s\n",((a%c)==0&&(b%c)==0)?"YES":"NO");
	}
	return 0;
}

