#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	while(T--)
	{
	    int N, K, result;
	    scanf("%d%d", &N, &K);
	    N=N/5+(N%5==0?0:1);
	    K=K/5+(K%5==0?0:1);
	    printf("%d\n", N-K);
	}
	return 0;
}