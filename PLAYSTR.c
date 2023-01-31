#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char s[n + 1];
	    char r[n + 1];
	    int a=0,b=0,c=0,d=0;
	    int i=0;
	    scanf("%s",s);
	    scanf("%s",r);
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        a++;
	        else
	        b++;
	    }
	    for(i=0;i<n;i++)
	    {
	        if(r[i]=='0')
	        c++;
	        else
	        d++;
	    }
	    if(a==c && b==d)
	    printf("YES\n");
	    else
	    printf("NO\n");
	    
	}
	return 0;
}

