#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,p,q;
	    scanf("%d %d %d %d",&x,&y,&p,&q);
	    int temp1,temp2;
	    temp1=x + p*10;
	    temp2= y + q*10;
	    if(temp1>temp2)
	    printf("Chefina\n");
	    else if(temp1<temp2)
	    printf("Chef\n");
	    else
	    printf("Draw\n");
	}
	return 0;
}

