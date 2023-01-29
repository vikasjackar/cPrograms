#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i=0,sum=0,temp,j,flag=0;
	    scanf("%d",&n);
	    int p[n];
	    int s[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d %d",&p[i],&s[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(p[i]<9)
	        {
	            temp=s[i];
	            for(j=(i+1);j<n;j++)
	            {
	                if(p[i]==p[j])
	                {
	                    flag=1;
	                    if(temp<s[j])
	                    {
	                        sum=sum+s[j];
	                        s[j]=0;
	                    }
	                    else
	                    {
	                    sum=sum+temp;
	                    s[j]=0;
	                    break;
	                    }
	                }
	            }
	            if(flag==0)
	            sum=sum+temp;
	        }
	    }
	    printf("%d\n",sum);
	}
	return 0;
}

