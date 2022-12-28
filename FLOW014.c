#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float h,c,t;
	    scanf("%f %f %f",&h,&c,&t);
	    if(h>50 && c<0.7 && t>5600)
	    printf("10\n");
	    else if(h>50 && c<0.7 && t<=5600)
	    printf("9\n");
	    else if(h<=50 && c<0.7 && t>5600)
	    printf("8\n");
	    else if(h>50 && c>=0.7 && t>5600)
	    printf("7\n");
	    else if(h>50 || c<0.7 || t>5600)
	    printf("6\n");
	    else
	    printf("5\n");
	}
	return 0;
}

