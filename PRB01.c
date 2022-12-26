#include <stdio.h>
int main() 
{
	int T,N,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    int c=0;
	    scanf("%d",&N);
	    for(int j=1;j<N;j++)
	    {
	        if(N%j==0)
	        c++;
	    }
	    if(c==1)
	    printf("yes\n");
	    else
	    printf("no\n");
	}
	return 0;
}