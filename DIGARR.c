#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int d;
	    scanf("%d",&d);
	    char s[d+1];
	    scanf("%s",s);
	    int i=0,flag=0;
	    for(i=0;i<d;i++)
	    {
	        if(s[i]=='5' || s[i]=='0')
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    {
	        printf("Yes\n");
	    }
	    else
	    printf("No\n");
	    
	}
	return 0;
}

