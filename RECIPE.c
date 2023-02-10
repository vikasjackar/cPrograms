#include <stdio.h>
int hum(int a,int b)
{
    int i, hcf;
   for(i = 1; i <= a || i <= b; i++) {
   if( a%i == 0 && b%i == 0 )
      hcf = i;
   }
   
   return hcf;

}
int main()
{
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    scanf("%d",&n);
	    int a[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    int temp;
	    temp=hum(a[0],a[1]);
	    for(i=2;i<n;i++)
	    {
	        temp=hum(temp,a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        printf("%d ",a[i]/temp);
	    }
	    printf("\n");
	    
	}
	return 0;
}

