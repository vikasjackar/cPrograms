#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char s[6];
	    char t[6];
	    char temp[6];
	    scanf("%s",&s);
	    scanf("%s",&t);
	    int i=0;
	    for(i=0;i<5;i++)
	    {
	        if(s[i]==t[i])
	        temp[i]='G';
	        else
	        temp[i]='B';
	    }
	    puts(temp);
	}
	return 0;
}

