#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,i,flag=0,number,j;
	    scanf("%d",&n);
	    for(i=1;i<=n;i++)
	    {
	        number=i*(i+1);
	        if(number == 1 || number == 0)
	        {
                flag=1;
            }

            for(j = 2; j <= number/2; j++)
            {
                if(number == j*j)
                {
                    flag=1;
                    break;
                }
            }
            if(flag == 0)
            printf("%d ",i);
	    
	    }
	    printf("\n");
	}
	return 0;
}

