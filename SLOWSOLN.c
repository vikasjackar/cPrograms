#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    int temp1,sum=0;
	    if(z%y==0)
	    {
	        temp1=z/y;
	        if(x<=temp1)
	            {
	                sum=x*y*y;
	            }
	        else
	            {
	                sum = temp1 * y * y + (z%y)*(z%y);
	            }
	    }
	    else
	    {
	        temp1=(z/y)  +  1;
	        if(x<=temp1)
	            {
	                sum=x*y*y;
	            }
	        else
	            {
	                sum = temp1 * y * y + (z%y)*(z%y);
	            }
	    }
	    
	    
	   // if(x<=temp1)
	   // {
	   //     sum=x*y*y;
	   // }
	   // else
	   // {
	   //     sum = (temp1 - 1) * y * y + (z%y)*(z%y);
	   // }
	    printf("%d\n",sum);
	    
	}
	return 0;
}

