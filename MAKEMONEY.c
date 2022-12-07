#include<stdio.h>  
  
int getMax(int a[], int n) {  
   int max = a[0];  
   for(int i = 1; i<n; i++) {  
      if(a[i] > max)  
         max = a[i];  
   }  
   return max; 
}  
void countSort(int a[], int n) 
{  
   int output[n+1];  
   int max = getMax(a, n);  
   int count[max+1];   
  
  
  for (int i = 0; i <= max; ++i)   
  {  
    count[i] = 0;  
  }  
    
  for (int i = 0; i < n; i++) 
  {  
    count[a[i]]++;  
  }  
  
   for(int i = 1; i<=max; i++)   
      count[i] += count[i-1];  
  for (int i = n - 1; i >= 0; i--) {  
    output[count[a[i]] - 1] = a[i];  
    count[a[i]]--;   
}  
  
   for(int i = 0; i<n; i++) {  
      a[i] = output[i];  
   }  
}  
  
int main(void) {
	// your code goes here
	int t;
    scanf("%d",&t);
    while(t--)  
    {
        int n,x,c,maximum;
        scanf("%d %d %d",&n,&x,&c);
        int A[n],i=0,sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&A[i]);
            sum=sum+A[i];
        }
         int m = sizeof(A)/sizeof(A[0]);
         countSort(A,m);
        int temp[n],temp1;
        temp[n]=sum;
        for(i=0;i<n;i++)
        {
            temp1=(x-A[i]);
            sum=sum + temp1 - c;
            temp[i]=sum;
        }
        maximum=temp[0];
        for(i=1;i<=n;i++)
        {
            if(maximum<temp[i])
            maximum=temp[i];
        }
        printf("%d\n",maximum);
         
        
    }
  
}  