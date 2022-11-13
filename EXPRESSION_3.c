#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long a,b,c;
	    scanf("%ld %ld %ld",&a,&b,&c);
	    if((a+b-c)==0 || (a+c-b)==0 || (b+c-a)==0 || (a-b-c)==0 || (b-a-c)==0 ||  (c-a-b)==0)
	    {
	        printf("\nYES");
	    }
	    else
	    printf("\nNO");
	}
	return 0;
}

