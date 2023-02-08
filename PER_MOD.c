#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int i=0;
	    for(i=1;i<n;i++)
	    {
	        printf("%d ",(i+1));
	    }
	    printf("1\n");
	}
	return 0;
}

