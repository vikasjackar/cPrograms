#include <stdio.h>

int main(void) {
	// your code goes here
	int n,h,x;
	scanf("%d %d %d",&n,&h,&x);
	int a[n];
	int i=0;
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	int flag=0;
	for(i=0;i<n;i++)
	{
	    if((a[i]+x)==h)
	    {
	        flag=1;
	    }
	}
	if(flag==1)
	printf("YES\n");
	else
	printf("NO\n");
	
	return 0;
}

