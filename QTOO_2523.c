#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char s[n+1];
	    scanf("%s",s);
	    int i=0,j=0,count=0,flag=0;
	    for(i=0;i<n;i++)
	    {
	        count=0;
	        for(j=0;j<n;j++)
	        {
	            if(s[i]==s[j])
	            count++;
	        }
	        if(count>1)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==0)
	    {
	        printf("-1\n");
	    }
	    else
	    printf("%d\n",(n-2));
	}
	return 0;
}

