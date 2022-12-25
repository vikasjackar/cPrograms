#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int i=0,count1=0,count2=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]==1)
	        count1++;
	        else
	        count2++;
	    }
	    if(count1==count2)
	    printf("0\n");
	    else if((abs(count1-count2))%2==0)
	    {
	        printf("%d\n",(abs(count1-count2))/2);
	    }
	    else
	    printf("-1\n");
	}
	return 0;
}

