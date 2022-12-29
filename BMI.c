#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int m,h;
	    scanf("%d %d",&m,&h);
	    int index;
	    index=m/(h*h);
	    if(index<=18)
	    printf("1\n");
	    else if(index>=19 && index<=24)
	    printf("2\n");
	    else if(index>=25 && index<=29)
	    printf("3\n");
	    else if(index>=30)
	    printf("4\n");
	}
	return 0;
}

