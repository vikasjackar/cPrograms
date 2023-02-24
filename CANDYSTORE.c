#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y;
	    scanf("%d %d",&x,&y);
	    int temp=0;
        if(y<=x)
        temp=y;
        else
        {
            temp=x + (y-x)*2; 
        }
        printf("%d\n",temp);
	}
	return 0;
}

