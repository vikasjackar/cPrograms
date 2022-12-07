#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,c;
        scanf("%d %d",&a,&c);
        int b;
        b=(a+c);
        if(b%2==0)
        printf("%d\n",(b/2));
        else
        printf("-1\n");
    }
	return 0;
}

