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
	    int i=0,count=0;
	    while(i<n)
	    {
	        if(s[i]==s[i + 1])
	        {
	            count++;
	            i=i+2;
	        }
	        else
	        {
	            count++;
	            i++;
	        }
	    }
	    printf("%d\n",count);
	    
	    
	}
	return 0;
}

