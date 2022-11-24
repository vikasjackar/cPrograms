#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x;
	    scanf("%d",&x);
	    if(x>=1 && x<100)
	    printf("\nEasy");
	    else if(x>=100 && x<200)
	    printf("\nMedium");
	    else if(x>=200 && x<=300)
	    printf("\nHard");
	}
	return 0;
}

