#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,x,i,ans=-1;
	    scanf("%d %d",&a,&b);
	    for(i=0;i<a;i++)
	    {
	        scanf("%d",&x);
	        if(x<b) ans=i;
	    }
	    printf("%d\n",ans+1);
	}
	return 0;
}

