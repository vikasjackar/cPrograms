#include <stdio.h>

int divide (int a[], int m, int n)  
{  
    int p;
    p = a[n]; // pivot element  
    int k,l,t;
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
	    int n,w,count=0,sum=0;
	    scanf("%d %d",&n,&w);
	    int a[n];
	    int i=0;
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    QS(a,0,n - 1);
	    for(i=(n - 1);i>=0;i--)
	    {
	        sum=sum+a[i];
	        count++;
	        if(sum>=w)
	        {
	            break;
	        }
	    }
	    printf("%d\n",(n - count));
	}
	
	return 0;
}

