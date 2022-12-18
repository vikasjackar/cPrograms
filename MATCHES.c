#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a,b,n=0,count=0,num=0,i=0,temp,sum;
	    scanf("%d %d",&a,&b);
	    n= a + b;
	    sum=n;
	    while(sum!=0)
	    {
	        sum=sum/10;
	        count++;
	    }
	    for(i=0;i<count;i++)
	    {
	        temp=n%10;
	        n=n/10;
	        if(temp==0 || temp==6 || temp==9)
	        {
	            num=num + 6;
	        }
	        else if(temp==2 || temp==3 || temp==5)
	        {
	            num=num + 5;
	        }
	        else if(temp==1)
	        {
	            num=num + 2;
	        }
	        else if(temp==4)
	        {
	            num =num + 4;
	            
	        }
	        else if(temp==7)
	        {
	            num = num + 3;
	        }
	        else
	        num=num + 7;
	    }
	    printf("%d\n",num);
	    
	}
	return 0;
}

