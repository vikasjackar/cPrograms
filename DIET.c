#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k;
	    scanf("%d %d",&n,&k);
	    int A[n];
	    int i=0,m,temp=0,flag=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&A[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if((temp+A[i])>=k)
	        {
	            temp=temp + A[i] - k;
	        }
	        else
	        {
	            flag=1;
	            m=i;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        printf("YES\n");
	    }
	    else
	    printf("NO %d\n",(m + 1));
	}
	return 0;
}

