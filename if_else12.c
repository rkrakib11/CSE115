#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Take three numbers as input:");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b){
        if(a>c)
        max=a;
        else
            max=c;
    }
    else{
        if(b>c)
            max=b;
        else
            max=c;
    }
    printf("Maximum Number is %d",max);
}
