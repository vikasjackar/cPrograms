#include <stdio.h>

int main(void) {
    int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s[100],c=0,d=0;
	    scanf("%s",&s);
	    for(int i=0;i<strlen(s)+1;i++)
	    {
	        if(s[i]=='a')  
	            c+=1;
	        if(s[i]=='b')
	            d+=1;
	    }
	    if(c<=d)
	        printf("%d\n",c);
	    else
	        printf("%d\n",d);
	}
	return 0;
}

