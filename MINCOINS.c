#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    int num;
	    num=x/10;
	    x=x%10;
	    if(x%5==0)
	    {
	        num= num + x/5;
	    }
	    else
	    num = -1;
	    
	    printf("%d\n",num);
	}
	return 0;
}

