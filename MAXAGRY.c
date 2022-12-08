#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,k,angriness=0,temp,i=0,temp1,temp2;
	    scanf("%ld %ld",&n,&k);
	   if(n<3)
	   {
	       angriness=(n-1);
	   }
	    temp=n;
	    if(k<=(n/2))
	    {
	       temp=n-1;
	       temp1=k*(2*temp - k + 1);
	       temp2=k*(k-1);
	       angriness=angriness + ((n - 2*k)*k) + temp1/2 + temp2/2 ;   
	        
	    }
	    else
	    {
	        k=n/2;
	        temp=n-1;
	       temp1=k*(2*temp - k + 1);
	       temp2=(k-1)*k;
	       angriness=angriness + ((n - 2*k)*k) + temp1/2 + temp2/2 ;
	    }
	    printf("%ld\n",angriness);
	}
	
	return 0;
}

