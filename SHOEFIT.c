#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int sum;
	    sum=a+b+c;
	    if(sum<3 && sum>=1){
	    printf("1\n");}
	    else{
	    printf("0\n");}
	}
	return 0;
}

