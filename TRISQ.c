#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int base;
	    scanf("%d",&base);
	    int i=0,l=0,b=0,temp=0;
	    if(base>=4)
	    {
	        l=base - 2;
	        b=base - 2;
	        b=b/2;
	        if(b>1)
	        {
	            l=l/2;
	            for(i=0;i<l;i++)
	            {
	                temp=temp + b ;
	                b--;
	            }
	        }
	        else
	        temp=b;
	        
	        printf("%d\n",temp);
	    }
	    else
	    printf("0\n");
	}
	return 0;
}

