//Answer-No.5
#include<stdio.h>
int main()
{
    int n,d,i,j,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);

    i=n;
    while(i>0)
    {
        d=i%10;
        int f=1;
        for(j=1; j<=d; j++)
        {
            f=f*j;
        }
        sum=sum+f;
        i=i/10;
    }

    if(n==sum)
        printf("%d is a Strong Number.",n);
    else
        printf("%d is not a Strong Number.",n);

    return 0;
}
