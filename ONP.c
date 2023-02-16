#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        char in[401],s[401];
        int top=-1;
        scanf("%s",in);
        for(int i=0;in[i];i++)
        {
            if(in[i]>='a' && in[i]<='z')
            {
            printf("%c",in[i]);
            }
            else if(in[i]=='(')
            {
                s[++top]='(';
            }
            else if(in[i]==')'){
                while(s[top]!='(')
                {
                    printf("%c",s[top--]);
                    
                }
                top--;
            }
            else s[++top]=in[i];
        }
        printf("\n");
    }
	return 0;
}

