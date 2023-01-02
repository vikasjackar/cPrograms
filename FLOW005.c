#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int temp=0;
	    int i=0;
	    temp=(n/100);
	    n=n%100;
	    temp=temp+(n/50);
	    n=n%50;
	    temp=temp+(n/10);
	    n=n%10;
	    temp= temp + (n/5);
	    n=n%5;
	    temp=temp + (n/2);
	    n=n%2;
	    temp=temp + (n/1);
	    
	    printf("%d\n",temp);
	    
	    
	}
	return 0;
}

