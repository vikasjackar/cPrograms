#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s[100000];
	    scanf("%s",s);
	    int n,i=0,count=0;
	    n=strlen(s);
	    for(i=1;i<n;i++)
	    {
	        if(s[i-1]=='<' && s[i]=='>')
	        count++;
	    }
	    printf("%d\n",count);
	    
	}
	return 0;
}

