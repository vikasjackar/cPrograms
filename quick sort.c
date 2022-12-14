#include <stdio.h>  
/* function that consider last element as pivot,  
place the pivot at its exact position, and place  
smaller elements to left of pivot and greater  
elements to right of pivot.  */  
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
  
  
void printArr(int a[], int n)  
{  
    int i;  
    for (i = 0; i < n; i++)  
        printf("%d ", a[i]);  
}  
int main()  
{  
    int a[] = { 24, 9, 29, 14, 19, 27 };  
    int n = sizeof(a) / sizeof(a[0]);  
    printf("Before sorting array elements are - \n");  
    printArr(a, n);  
    QS(a, 0, n - 1);  
    printf("\nAfter sorting array elements are - \n");    
    printArr(a, n);  
      
    return 0;  
}  