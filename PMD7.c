#include <stdio.h>
#include<math.h>

void ans(long long num,int p){
    long long  mod,q,mod1,a;
    long long reverse=0;
    while(num>0){
        mod = num%10;
         a = p % 4;
            if (a == 0 && p != 0) {
                a = 4;
            }
        q = pow(mod,a);
        mod1=q%10;
        reverse = (reverse*10)+ mod1;
        num = num/10;
        
        
    }
    if(reverse %7 ==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    
}
int main(void) {
    int t,r,i;
    long long  n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d %d",&n,&r);
        ans(n,r);
    }
	// your code goes here
	return 0;
}

