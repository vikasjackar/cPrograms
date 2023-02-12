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
	    scanf("%s",a);
	    int i=0,count=0;
	    for(i=0;i<n;i++)
	    {
	        if(a[i]=='0')
	        count++;
	    }
	    if(count<=30)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

