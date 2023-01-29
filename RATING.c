#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int s;
	    scanf("%d",&s);
	    int temp;
	    temp=(s + 1 )*(-1); 
	    printf("%d\n",temp);
	}
	
	return 0;
}

