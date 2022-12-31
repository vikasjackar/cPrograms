#include <stdio.h>

int main(void) {
	int t;

	scanf("%d",&t);
	while(t--)
	{
	    	char a,b,c,p,q;
	    scanf(" %c %c %c",&a,&b,&c);
	    scanf(" %c %c",&p,&q);
	    if(a==p || a==q){printf("%c\n",a);}
	    else{printf("%c\n",b);}
	}
	return 0;
}
