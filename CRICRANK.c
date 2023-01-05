#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,c;
	    scanf("%d %d %d",&a,&b,&c);
	    int d,e,f;
	    scanf("%d %d %d",&d,&e,&f);
	    int temp1=0,temp2=0;
	    if(a>d)
	    temp1++;
	    if(a<d)
	    temp2++;
	    if(b>e)
	    temp1++;
	    if(e>b)
	    temp2++;
	    if(c>f)
	    temp1++;
	    if(c<f)
	    temp2++;
	    
	    if(temp1>temp2)
	    printf("A\n");
	    else
	    printf("B\n");
	}
	return 0;
}

