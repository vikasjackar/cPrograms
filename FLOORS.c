#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int i,temp1,temp2;
	    for(i=1;i<=10;i++)
	    {
	        if(x>=10*(i-1)+1 && x<=10*i)
	        {
	            temp1=i;
	        }
	        if(y>=10*(i-1)+1 && y<=10*i)
	        {
	            temp2=i;
	        }
	    }
	    printf("%d\n",abs(temp1-temp2));
	}
	return 0;
}

