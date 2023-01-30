/*#include <stdio.h>

int main(void) {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    long int ni,k,o=1,j,s=0;
    scanf("%ld %ld",&ni,&k);
    for(j=1;j<k;j++)
    {
        s=s*(ni-k+j)/j;
    
       
    }
     printf("%ld\n",s);
    }
	return 0;
}*/
 
 
 #include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    long int n,k,a=1;
	    scanf("%ld%ld",&n,&k);
	    for(int i=1;i<k;i++)
	    {
	        a=a*(n-k+i)/i;
	    }
	    printf("%ld\n",a);
	}
	return 0;
}

