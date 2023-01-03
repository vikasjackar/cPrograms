#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a[10];
	    int i=0;
	    for(i=0;i<10;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int sum1=0,sum2=0;
	    for(i=0;i<10;i++)
	    {
	        if(i%2==0)
	        sum1=sum1+a[i];
	        else
	        sum2=sum2+a[i];
	    }
	    if(sum1>sum2)
	    printf("1\n");
	    else if(sum1<sum2)
	    printf("2\n");
	    else
	    printf("0\n");
	}
	
	return 0;
}

