#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    float s,a,b,c,new;
	    scanf("%f %f %f %f",&s,&a,&b,&c);
	    new = s + (s*c)/100;
	    if(new>=a && new<=b)
	    printf("\nYES");
	    else
	    printf("\nNO");
	}
	return 0;
}

