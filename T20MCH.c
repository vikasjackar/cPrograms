#include <stdio.h>

int main(void) {
	// your code goes here
	int r,o,c;
	scanf("%d %d %d",&r,&o,&c);
	int temp;
	temp=((20 - o)*36) + c;
	if(temp>r)
	printf("YES\n");
	else
	printf("NO\n");
	
	return 0;
}

