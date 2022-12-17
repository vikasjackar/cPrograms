#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b;
	    scanf("%d %d",&a,&b);
	    int max=1000,i=0;
	    for(i=1;i<max;i++)
	    {
	        if(i%2!=0)
	        {
	            a=a-i;
	            if(a<0)
	            {
	                printf("Bob\n");
	                break;
	            }
	        }
	        else
	        {
	            b=b-i;
	            if(b<0)
	            {
	                printf("Limak\n");
	                break;
	            }
	        }
	    }
	}
	
	return 0;
}

