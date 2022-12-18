#include <stdio.h>

int divide (int a[], int m, int n)  
{  
    int p;
    p = a[n];  
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
	    int n,k=0,count=1;
	    scanf("%d",&n);
	    int a[n];
	    int b[n];
	    int i=0;
	    for (i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    QS(a,0,n - 1);
	    for(i=0;i<n;i++)
	    {
	        if(i!=(n-1))
	        {
	        if(a[i]==a[i+1])
	        {
	            count++;
	        }
	        else
	        {
	            b[k]=count;
	            k++;
	            count=1;
	        }
	        }
	        else
	        {
	            b[k]=count;
	            k++;
	        }
	    }
	    QS(b,0,k - 1);
	    printf("%d\n",n-b[k-1]);
	}
	return 0;
}

