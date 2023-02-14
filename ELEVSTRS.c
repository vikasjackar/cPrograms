#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float n,v1,v2;
	    scanf("%f %f %f",&n,&v1,&v2);
	    float temp1=0,temp2=0;
	    temp1=(n*2)/v2;
	    temp2=(n*sqrt(2.0))/v1;
	    if(temp1>temp2)
	    printf("Stairs\n");
	    else 
	    printf("Elevator\n");
	}
	return 0;
}

