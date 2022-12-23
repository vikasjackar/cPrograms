#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,m=0,p=0,i=0;
        scanf("%d",&n);
        char s[8];
        for(i=0;i<n;i++)
        {
            scanf("%s",&s);
            if(s[0]=='S')
            {
                m++;
            }
            else
            p++;
        }
        printf("%d %d\n",m,p);
    }
	// your code goes here
	return 0;
}

