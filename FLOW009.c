#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float x,y;
	    scanf("%f %f",&x,&y);
	    float temp;
	    temp=(x*y);
	    if(x>1000)
	    printf("%.6f\n",(temp*0.9));
	    else
	    printf("%.6f\n",temp);
	    
	}
	return 0;
}

