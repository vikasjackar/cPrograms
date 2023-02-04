#include <stdio.h>
#include <string.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,i,c=0;
	    scanf("%d",&a);
	    char s[a+1],r[a+1];
	    for(i=0;i<=a;i++)
	    {
	        scanf("%c",&s[i]);
	    }
	    for(i=0;i<=a;i++)
	    {
	        scanf("%c",&r[i]);
	        if(s[i]!=r[i])
	            c+=1;
	    }
	    if(c%2==0)
	        printf("1\n");
        else
            printf("0\n");
	}
	return 0;
}

