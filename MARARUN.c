#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int D,d,a,b,c;
	    scanf("%d %d %d %d %d",&D,&d,&a,&b,&c);
	    float temp;
	    temp=d*D;
	    if(temp>=10 && temp<21)
	    printf("%d\n",a);
	    else if(temp>=21 && temp<42)
	    printf("%d\n",b);
	    else if(temp>=42)
	    printf("%d\n",c);
	    else
	    printf("0\n");
	    
	}
	return 0;
}

