#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    char s[n];
	    char temp;
	    int temp1;
	    int i=0;
	    scanf("%s",&s);
	    if(n%2==0)
	    {
	        for(i=0;i<n;i=i+2)
	        {
	            temp=s[i];
	            s[i]=s[i+1];
	            s[i+1]=temp;
	        }
	    }
	    else
	    {
	        for(i=0;i<(n-1);i=i+2)
	        {
	            temp=s[i];
	            s[i]=s[i+1];
	            s[i+1]=temp;   
	        }
	    }
	    for(i=0;i<n;i++)
	    {
	        temp1=(s[i] - 97);
	        s[i]=122 - temp1;
	    }
	    puts(s);
	}
	return 0;
}

