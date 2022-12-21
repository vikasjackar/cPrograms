#include <stdio.h>

int main()
{
long long int T,i,N,a,b;
scanf("%lld",&T);
for(i=0;i<T;i++){
    scanf("%lld",&N);
    char S[2*N+1];
    scanf("%s",S);
    long long int A[2*N],B[2*N];
    for(a=0,b=0;(a+b)<2*N;){
        if(S[a+b]=='0'){
           A[a]=a+b+1;
            a++;
        }
        else{
            B[b]=a+b+1;
            b++;
        }
    }
    if(a==0||b==0){
        printf("-1");
    }
    else{
        if(b>a){
            for(a=0;a<N;a++){
                printf("%lld ",B[a]);
            }
        }
        else{
            for(b=0;b<N;b++){
                printf("%lld ",A[b]);
            }
        }
    }
    printf("\n");
}

return 0;
}

