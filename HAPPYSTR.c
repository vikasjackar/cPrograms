#include<stdio.h>
#include<string.h>
int main()
{
    int t,len,j,res,k;char a[1000],b[]={'a','e','i','o','u'};
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        scanf("%s",a);len=0;res=0;
        len=strlen(a);
        for(j=0;j<len;j++)
        {
            for(k=0;k<5;k++)
            {
                if(a[j]==b[k])
                {
                    res++;
                    break;
                }
            }
            if(res>2)
            break;
            if(k==5)
            res=0;
        }
        if(res>2)
        printf("\n Happy");
        else
        printf("\n Sad");
	}
	return 0;
}