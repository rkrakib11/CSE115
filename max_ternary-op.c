#include<stdio.h>
int main()
{
    int a,b,min,max;
    scanf("%d%d",&a,&b);
    min=(a<b)?a:b;
    if(min==a)
        max=b;
        else max=a;
    printf("%d",max);
}
