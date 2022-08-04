//Answer NO.1
#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of terms: ");
    scanf("%d",&n);
    printf("\n");

    int sum=0,i=1,t=0;
    while(i<=n)
    {
        t=(t*10)+1;
        sum=sum+t;
        if(i<n)
            printf(" %d +",t);
        else
            printf(" %d",t);
        i++;
    }
    printf("\nSum of the series is: %d\n",sum);

    return 0;

}


