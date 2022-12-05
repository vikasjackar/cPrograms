#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,m,k,x;
	    scanf("%d %d %d %d",&n,&m,&k,&x);
	    int p,j,y;
	    p= (n*k) + m;
	    j = x % p;
	    y = (k-1)*n;
	    if(j > y || j == 0)
	    printf("YES\n");
	    else
	    printf("NO\n");
	}
	return 0;
}