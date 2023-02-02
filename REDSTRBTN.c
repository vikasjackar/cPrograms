#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int x,y,z;
	    scanf("%d%d%d",&x,&y,&z);
	    
	    if (x!=y && y!=z && x!=z)
	    {
	        printf("YES\n");
	    }
	    else
	    {
	        if ((x+y+z)>=6)
	        {
	            printf("YES\n");
	        }
	        else
	        {
	            printf("NO\n");
	        }
	    }
	}
	return 0;
}

