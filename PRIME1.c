#include <stdio.h>

#include <math.h>


int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,n;
	    scanf("%d %d",&m,&n);
	    if(m==1)
	        m++;
	    for(int i=m;i<=n;i++)
	    {
	        int flag=0;
	        for(int j=2;j<=sqrt(i);j++)
	        {
	            if(i%j==0)
                {
	              flag++;
	              break;
                }
            }
	       if(flag==0)
	           printf("%d\n",i);
       }
	}
	return 0;
}