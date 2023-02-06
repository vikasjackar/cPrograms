#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, x;
        scanf("%d %d", &n, &x);
        printf("%d\n", (n * 2) - x + 1);
    }
	return 0;
}

/*

n = 5 * 2 = 10
7

*/
