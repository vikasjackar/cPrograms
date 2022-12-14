#include <stdio.h>
#define MAX 999999

int divide (int a[], int m, int n)  
{  
    int p;
    p = a[n]; // pivot element  
    int k,l,y,t;
    k = (m - 1);  
    for (l = m; l <= n - 1; l++)  
    {  if (a[l] < p)  
        {  
            k++;  
            t = a[k];  
            a[k] = a[l];  
            a[l] = t;  
        }  
    }  
    t = a[k+1];  
    a[k+1] = a[n];  
    a[n] = t;  
    return (k + 1);  
}  
void QS(int a[], int x, int y)   
{  
    if (x < y)  
    {  
        int z = divide(a, x, y);  
        QS(a, x, z - 1);  
        QS(a, z + 1, y);  
    }  
}  
  

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,m;
	    scanf("%d %d",&n,&k);
	    int a[n];
	    int b[n];
	    int i=0,min=0,j=0,count=0,duration=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&b[i]);
	    }
	    
	    if(k<=n)
	    {
	        
	    for(i=0;i<n;i++)
	    {
	        for(j=(i+1);j<n;j++)
	        {
	            if(a[i]==a[j])
	            {
	                if(b[i]<b[j])
	                {
	                    b[j]=MAX;
	                }
	                else
	                {
	                    b[i]=MAX;
	                }
	            }
	        }
	    }
	    
	    QS(b,0,n - 1);
	    
	    for(i=0;i<n;i++)
	    {
	        if(count<k)
	        {
	            if(b[i]<MAX)
	            {
	                duration=duration + b[i];
	                count++;
	            }
	            else
	            {
	                duration=-1;
	                break;
	            }
	        }
	    }
	   
	    printf("%d\n",duration);
	    }
	    else
	    {
	        printf("-1\n");
	    }
	}
	return 0;
}

