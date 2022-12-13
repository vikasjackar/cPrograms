/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
 int main()
 {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        char A[n];
        scanf("%s",&A);
        int i=0,j=0,flag=1,temp=0;

        for(i=0;i<n;i++)
        {
            if(A[i]!='.')
            {
                A[j]=A[i]; 
                j++;
            }

        }
        if(A[0]=='T' || A[j-1]=='H')
        {
            flag=0;
        }
        else
        {
            for(i=0;i<j;i++)
            {
                if(A[i]=='H')
                {
                    if(temp==0)
                    temp=1;
                    else
                    {
                        flag=0;
                        break;
                    }
                }
                else
                {
                    if(temp==1)
                    temp=0;
                    else
                    {
                        flag=0;
                        break;
                    }
                }
            }
        }
        if(flag==1)
        printf("Valid\n");
        else
        printf("Invalid\n");
        

    }
 }
