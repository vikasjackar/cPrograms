#include <stdio.h>

int main(void) 
{
	int T,N;
	scanf("%d",&T);
	while(T--)
	{
	    scanf("%d",&N);
	    int A[N - 1];
	    for(int i = 0; i < (N - 1); i++)
	    {
	      scanf("%1d", &A[i]);
	    }
	    int count  = 1;
	    for(int i = 0; i < (N - 2); i++)
	    {
	        if( A[i] == 1 && A[i + 1] == 0)
	            count++;
	    }
	    printf("%d\n", count);
	    
	}
	return 0;
}

