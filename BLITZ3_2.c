#include <stdio.h>

int main(void) {
        int T;
        scanf("%d",&T);
        for(int i=0;i<T;i++)
        {
            int N,A,B;
            scanf("%d%d%d",&N,&A,&B);
            printf("%d\n",(2*(180+N))-(A+B));
        }
        	return 0;
}

