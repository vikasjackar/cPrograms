#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a[5];
	    int i=0,count=0;
	    for(i=0;i<5;i++)
	    {
	        scanf("%d",&a[i]);
	        if(a[i]==1)
	        count++;
	    }
	    if(count==0)
	    printf("Beginner\n");
	    else if(count==1)
	    printf("Junior Developer\n");
	    else if(count==2)
	    printf("Middle Developer\n");
	    else if(count==3)
	    printf("Senior Developer\n");
	    else if(count==4)
	    printf("Hacker\n");
	    else if(count==5)
	    printf("Jeff Dean\n");
	}
	return 0;
}

