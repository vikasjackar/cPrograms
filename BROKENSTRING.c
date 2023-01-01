#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,m;
	    scanf("%d",&n);
	    char s[n+1];
	    scanf("%s",&s);
	    int i=0,flag=0,j;
	    j=n/2;
	    for(i=0;i<=(n/2 - 1);i++)
	    {
	        if(s[i]!=s[j])
	        {
	            flag=1;
	        }
	        j++;
	    }
	    if(flag==0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}

