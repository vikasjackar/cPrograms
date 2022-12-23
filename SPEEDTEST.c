#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float a,x,b,y;
	    scanf("%f %f %f %f",&a,&x,&b,&y);
	    float temp1,temp2;
	    temp1=a/x;
	    temp2=b/y;
	    if(temp1>temp2)
	    printf("Alice\n");
	    else if(temp1<temp2)
	    printf("Bob\n");
	    else
	    printf("Equal\n");
	}
	return 0;
}

