#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,x,y;
	    scanf("%d %d %d",&n,&x,&y);
	    char s[n+1];
	    scanf("%s",s);
	    int i=0,one=0,zero=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        zero++;
	        else
	        one++;
	    }
	    if(zero==0 || one==0)
	    printf("0\n");
	    else if(x<y)
	    printf("%d\n",x);
	    else
	    printf("%d\n",y);
	}
	return 0;
}

