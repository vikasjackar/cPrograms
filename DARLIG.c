#include <stdio.h>

int main() 
{
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    int n,k;
	    scanf("%d%d",&n,&k);
	    
	    if(k==0)
	    {
	        if(n%4==0)
	            printf("Off\n");
	        
	        else
	            printf("On\n");	      
	        
	    }
	    
	    else if(k==1)
	    {
	        if(n%4==0)
	            printf("On\n");
	        else
	            printf("Ambiguous\n");	        
	    }
	    
	    t--;
	}
	return 0;
}



