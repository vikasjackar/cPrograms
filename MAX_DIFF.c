#include <stdio.h>
#include <stdlib.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,s;
	    scanf("%d %d",&n,&s);
	    if(n>=s)
	    printf("\n%d",s);
	    if(n<s)
	    printf("\n%d",(n-(s-n)));
	    
	}
	return 0;
}

