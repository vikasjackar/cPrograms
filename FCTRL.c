#include <stdio.h>

int main(void)
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, count = 0;
        scanf("%d", &n);
        while(n!=0)
        {
            count += n/5;
            n/= 5;
        }
        printf("%d\n", count);
        
    }
	return 0;
}

