#include <stdio.h>

int main(void) {
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n],i,t=0,count=0;
	    for(i=0;i<n;i++)
	    {
	      scanf("%d ",&a[i]);
	      if(a[i]<0)
	        count++;
	      if(a[i]==0)
	        t=1;
	    }
	    if(t==1) 
	      printf("%d\n",0);
   	    else if(count%2==0)
	      printf("%d\n",0);
	    else
          printf("%d\n",1);
	}
	return 0;
}

