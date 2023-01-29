#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long long int h,w,x,y,k;
	    scanf("%lld %lld %lld %lld %lld",&h,&w,&x,&y,&k);
	    long long int temp;
	    temp=(w-x)*(w-x) + (h-y)*(h-y) ;
	   // temp=sqrt(temp);
	   // printf("%f\n",temp);
	    if(temp<k*k)
	    printf("1\n");
	    else 
	    printf("0\n");
	}
	return 0;
}

