#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float x1,y1,x2,y2,D;
	    scanf("%f %f %f %f %f",&x1,&y1,&x2,&y2,&D);
	    float temp1,temp2;
	    temp1=x1/x2;
	    temp2=y1/y2;
	    int min;
	    if(temp1<temp2)
	    min=temp1;
	    else
	    min=temp2;
	    
	    if(min>=D)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

