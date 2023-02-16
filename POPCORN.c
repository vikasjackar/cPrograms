#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int a1,a2,b1,b2,c1,c2,x,y,z;
	    scanf("%d%d",&a1,&a2);
	    scanf("%d%d",&b1,&b2);
	    scanf("%d%d",&c1,&c2);
	    x=a1+a2;
	    y=b1+b2;
	    z=c1+c2;
	    if(x>=y&&x>=z)printf("%d\n",x);
	    else if(y>=x&&y>=z)printf("%d\n",y);
	    else if(z>=x&&z>=y)printf("%d\n",z);
	}
	return 0;
}

