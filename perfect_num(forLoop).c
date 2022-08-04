#include <stdio.h>

int main()
{
    int a,b,i,j;


    printf("Input the starting range of number: ");
    scanf("%d", &a);
    printf("Input the ending range of number: ");
    scanf("%d", &b);
    printf("The Perfect numbers within the given range: ");


    for(i=a; i<=b; i++)
    {
        int sum=0;

        for(j=1; j<i; j++)
        {
            if(i%j==0)
            {
                sum=sum+j;
            }
        }

        if(sum==i)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
