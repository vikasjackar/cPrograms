#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,x;
	    scanf("%d %d %d",&a,&b,&x);
	    int temp=0;
	    if(a==b)
	    {
	    printf("YES\n");
	    }
	    else
	    {
	        temp=abs(a-b);
	        if(temp%x==0 && (temp/x)%2==0)
	        printf("YES\n");
	        else
	        printf("NO\n");
	        
	    }
	}
	return 0;
}

