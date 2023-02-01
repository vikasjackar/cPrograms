#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,i=0,count=0,sum=0;
	    scanf("%ld",&n);
	    char s[n+1];
	    scanf("%s",s);
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        {
	            count++;
	        }
	        else
	        {
	            sum=sum+count;
	        }
	    }
	    sum=(sum%(1000000000+7));
	    printf("%ld\n",sum);
	}
	return 0;
}

