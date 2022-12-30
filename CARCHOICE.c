#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float  x1,x2,y1,y2;
	    scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
	    float temp,m,n;
	    temp=(x1*x2);
	    m=(temp/x1)*y1;
	    n=(temp/x2)*y2;
	    if(m>n)
	    printf("1\n");
	    else if(n>m)
	    printf("-1\n");
	    else 
	    printf("0\n");
	}
	return 0;
}

