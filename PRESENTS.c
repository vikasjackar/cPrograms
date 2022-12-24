#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int temp;
	    temp= n-(n/5);
	    printf("%d\n",temp);
	}
	return 0;
}

