#include <stdio.h>
int main() {
	
    int t;
    scanf("%d",&t);
    while(t--)
    {
    	int n,i,j,odd=0,even=0;
    	scanf("%d",&n);
    	
    	int arr[n];
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&arr[i]);
		}
		
		for(i=0;i<n;i++)
		{
			if(arr[i]%2==0)
				even+=1;
			else
				odd+=1;
	 	}
	 	
	 	if(even==0)
	 	{
	 		if(odd==1||odd%2==0)
	 			printf("1\n");
	 		else
	 			printf("2\n");
		}
		
		else
		{
			if(odd%2==0)
				printf("1\n");
			else
				printf("2\n");
		}
		
				
	
    	
	}
    return 0;
}

