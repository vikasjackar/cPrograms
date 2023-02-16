#include <stdio.h>

int main(void) {
	// your code goes here
	float t,a,b,c,d;
	scanf("%f/",&t);
	while(t--)
	{
	    scanf("%f %f %f %f",&a,&b,&c,&d);
	    if((a*a/(c*c*c))==(b*b/(d*d*d)))
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

