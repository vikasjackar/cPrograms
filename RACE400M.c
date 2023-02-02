#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int x,y,z;
        scanf("%d%d%d",&x,&y,&z);
        
        if (x<y && x<z)
        {
            printf("ALICE\n");
        }
        else if (y<x && y<z)
        {
            printf("BOB\n");
        }
        else 
        {
            printf("CHARLIE\n");
        }
    }
	return 0;
}

