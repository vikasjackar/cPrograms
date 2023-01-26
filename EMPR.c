#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    double p,x,y,z;
	    scanf("%lf %lf %lf %lf",&p,&x,&y,&z);
	    double temp;
	    if(z==1)
	    temp=p + (p*y)/100.0000000000;
	    else 
	    temp= p - (p*x)/100.0000000000;
	    
	    printf("%.10lf\n",temp);
	}
	return 0;
}

