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
	    int i=0,zero=0,one=0;
	    for(i=0;i<n;i++)
	    {
	        if(s[i]=='0')
	        zero++;
	        else
	        one++;
	    }
	    if(zero==n)
	    printf("0\n");
	    else if(zero>one)
	    printf("%d\n",one);
	    else if(zero<one)
	    printf("%d\n",(1+zero));
	    else
	    printf("%d\n",one);
	}
	return 0;
}

