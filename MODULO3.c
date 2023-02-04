#include <stdio.h>
int main(void)
{
	int T, A, B;
	scanf("%d", &T);
	while(T--)
	{
		scanf("%d %d", &A, &B);
		if(A==0 || B==0 || A%3==0 || B%3==0)
		{
			printf("0\n");
		}
		else if(A%3 == B%3)
		{
			printf("1\n");
		}
		else
		{
			printf("2\n");
		}
	}
	return 0;
}