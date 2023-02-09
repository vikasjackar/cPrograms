#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,a,b;
	    scanf("%d %d %d",&n,&a,&b);
	    int i=0;
	    float temp1=0,temp2=0,temp=0;
	    int x[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&x[i]);
	        temp++;
	        if(x[i]==a)
	        temp1++;
	        if(x[i]==b)
	        temp2++;
	       
	    }
	    temp1=temp1/temp * temp2/temp;
	    printf("%f\n",temp1);
	    
	}
	return 0;
}

