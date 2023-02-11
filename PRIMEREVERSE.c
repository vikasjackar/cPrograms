#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char a[n+1];
	    char b[n+1];
	    scanf("%s",a);
	    scanf("%s",b);
	    int i=0,x1=0,x2=0,y1=0,y2=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]=='0')
	        x1++;
	        else 
	        y1++;
	    }
	    for(i=0;i<n;i++)
	    {
	        if(b[i]=='0')
	        x2++;
	        else 
	        y2++;
	    }
	    if(x1==x2 && y1==y2)
	    printf("YES\n");
	    else 
	    printf("NO\n");
	    
	}
	return 0;
}

