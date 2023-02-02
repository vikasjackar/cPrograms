#include <stdio.h>

int main(void) 
{
	int T;
	scanf("%d", &T);
	while(T--)
	{
	    int X, A[3];
		scanf("%d %d %d %d", &X, &A[0], &A[1], &A[2]);
		int i, j;
		for(i=0; i<3; i++)
		{
			for(j=i+1; j<3; j++)
			{
				if(A[i]>A[j])
				{
					int temp=0;
					temp = A[i];
					A[i] = A[j];
					A[j] = temp;
				}
			}
		}
		printf("%d\n", A[1] + A[0]*(X-1));
	}
	return 0;
}

