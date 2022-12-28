#include <stdio.h>

int main(void) {
	// your code goes here
	char x,y;
	scanf("%c %c",&x,&y);
	if(x=='R' || y=='R')
	printf("R\n");
	else if((x=='B' && y=='G') || (y=='B' && x=='G') || (y=='B' && x=='B'))
	printf("B\n");
	else 
	printf("G\n");
	return 0;
}

