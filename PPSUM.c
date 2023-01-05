#include <stdio.h>

int sum(int n)
{
    int temp=0;
    int i=0;
    for(i=1;i<=n;i++)
    {
        temp=temp+i;
    }
    return temp;
}

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int d,n;
	    scanf("%d %d",&d,&n);
	    int s=0,j=0;
	    for(j=1;j<=d;j++)
	    {
	        if(j==1)
	        {
	            s=sum(n);
	        }
	        else
	        {
	            s=sum(s);
	        }
	    }
	    printf("%d\n",s);
	}
	return 0;
}

