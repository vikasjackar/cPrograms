#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int A[n],count=0;
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&A[i]);
	        if(A[i]==1)
	        count++;
	    }
	    if(count%2==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

