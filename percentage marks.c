#include<stdio.h>
int main()
{
    int a,b,c,d,e,M,P;
    printf("marks obtained in maths. : ");
    scanf("%d", &a);
    printf("marks obtained in physics : ");
    scanf("%d", &b);
    printf("marks obtained in chemistry : ");
    scanf("%d", &c);
    printf("marks obtained in english : ");
    scanf("%d", &d);
    printf("marks obtained in physical education : ");
    scanf("%d", &e);
    
    M=a+b+c+d+e;
    printf("total marks obtained : %d",M);
    
    P=M*100/500;
    printf("percentage obtained : %d",P);
    
    return 0;
}