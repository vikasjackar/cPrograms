#include <stdio.h>

int main(void) {
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         int ni,j,s[1000],l[1000],k,r[1000],count=0;
    scanf("%d",&ni);
    for(j=1;j<=ni;j++)
    {
         
    scanf("%d %d",&s[j],&l[j]);
    
    }
    for(k=1;k<=ni;k++)
    {
         
     r[k]= l[k]-s[k];
    if(r[k]>5)
    {
        count++;
    }
    }
    
    printf("%d\n",count);
    }
	return 0;
}

