#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a[3];
	    int b[3];
	    int i=0,t1=0,t2=0,t3=0,t4=0;
	    for(i=0;i<3;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]==1)
	        t1=t1 + 1;
	        else
	        t2= t2 + 1;
	    }
	    for(i=0;i<3;i++)
	    {
	        scanf("%d",&b[i]);
	        if(b[i]==1)
	        t3= t3 + 1;
	        else
	        t4= t4 + 1;
	    }
	    if(t1==t3 && t2==t4)
	    printf("Pass\n");
	    else
	    printf("Fail\n");
	}
	return 0;
}

