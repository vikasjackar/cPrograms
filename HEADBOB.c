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
	    int i=0,y=0,n=0,j=0;
	    for(j=0;j<d;j++)
	    {
	        if(s[j]=='Y')
	        y++;
	        else if(s[j]=='N')
	        n++;
	        else if(s[j]=='I')
	        i++;
	    }
	    if(i!=0)
	    printf("INDIAN\n");
	    else if(i==0 && y!=0)
	    printf("NOT INDIAN\n");
	    else if(i==0 && y==0)
	    printf("NOT SURE\n");
	}
	return 0;
}

