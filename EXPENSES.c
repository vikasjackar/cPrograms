#include <stdio.h>
#include <math.h>

int main(void) {
	// your code goes here
	int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,x;
        scanf("%d %d",&n,&x);
        int income,i,save;
        income=pow(2,x);
        save=income/2;
        for(i=2;i<=n;i++)
        {
            save=save-(save/2);
        }
        printf("%d\n",save);
    }
	return 0;
}

