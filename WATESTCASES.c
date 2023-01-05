#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--){
    int n;
    scanf("%d",&n);
    
    int s[n];
    for(int i=0;i<n;i++){
        scanf("%d ",&s[i]);
    }
    
    char v[n];
        scanf("%s",v);
   
    int c=999;
    for(int i=0;i<n;i++){
        if(v[i]=='0' && s[i]<c){
          c=s[i];
        }
    }
    printf("%d\n",c);
}
	return 0;
}

