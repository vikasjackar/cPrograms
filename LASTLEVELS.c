#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int x,y,z;
	    scanf("%d %d %d",&x,&y,&z);
	    int temp;
	    temp=x/3;
	    if(x%3==0){
	    printf("%d\n",(x * y + (temp - 1)*z));
	    }
	    else
	    printf("%d\n",x * y + temp*z);
	}
	return 0;
}

