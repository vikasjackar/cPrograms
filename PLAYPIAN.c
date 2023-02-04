#include <stdio.h>
#include <string.h>

int main(void) {
    int t,c=0;
	scanf("%d",&t);
	while(t>0)
	{
	    char x[100];
	    scanf("%s",x);
	    for(int i=1;i<strlen(x);i+=2)
	    {
	        //printf("%c\n", x[1] );
	        if((x[i-1]=='A' && x[i]=='B') || (x[i-1]=='B' && x[i]=='A')){
	            c=1;
	            
	        }
	        else{
	            c=0;
	            break;
	        }
	    }
	    if(c==1)
	        printf("yes\n");
	    else
	        printf("no\n"); 
	    t-=1;	
	}
	    return 0;
}

