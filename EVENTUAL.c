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
	    int temp[n];
	    int i=0,k=0,count=0,j=0;
	    for(i=0;i<n;i++)
	    {
	        count=0;
	        for(j=0;j<n;j++)
	        {
	            if(s[i]==s[j])
	            count++;
	        }
	        temp[k]=count;
	        k++;
	    }
	    int flag=0;
	    for(i=0;i<k;i++)
	    {
	        if(temp[i]%2!=0)
	        {
	            flag=1;
	            break;
	        }
	    }
	    if(flag==1)
	    printf("NO\n");
	    else
	    printf("YES\n");
	}
	return 0;
}

