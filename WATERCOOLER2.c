#include <stdio.h>
int main() 
{
	int T,X,Y,i;
	scanf("%d",&T);
	for(i=1;i<=T;i++)
	{
	    scanf("%d %d",&X,&Y);
	    if(Y%X==0)
	    printf("%d\n",Y/X-1);
	    else
	    printf("%d\n",Y/X);
	}
	return 0;
}