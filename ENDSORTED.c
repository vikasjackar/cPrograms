#include <stdio.h>

void swap( int *p, int *q)
{
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}

int main(void) {
	// your code goes here
	int test_case;
	scanf("%d", &test_case);
	
	while(test_case--)
	{
	    int n,ans =0;
	    scanf("%d", &n);
	    int arr[n],f,l;
	    
	    for(int i =0; i<n; i++)
	    {
	        scanf("%d ", &arr[i]);
	        if( arr[i] == 1)
	            {
	                f = i;
	            }
	    }
	    
	    if( arr[0] == 1 && arr[n-1] == n)
	    {
	        printf("0\n");
	        continue;
	    }
	    else
	    {
	      for( int i =f; i>0; i--)
	        {
	            swap( &arr[i], &arr[i-1]);
	            ans++;
	        }
	          for( int i =0; i<n; i++)
	        {
	            if( arr[i] == n)
	            {
	                l = i;
	            }
	        }
	          for( int i =l; i<n; i++)
	        {
	            swap( &arr[i], &arr[i+1]);
	            ans++;
	        }
	        
	        
	    }
	    
	    printf("%d\n", ans-1);
	}
	return 0;
}

