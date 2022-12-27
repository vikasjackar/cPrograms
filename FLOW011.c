#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int x;
	    scanf("%ld",&x);
	    float temp;
	    if(x<1500)
	    temp=x + (x*0.1) + (x*0.9);
	    else
	    temp=x + 500 + (x*0.98);
	    
	    printf("%.2f\n",temp);
	}
	return 0;
}

