#include<stdio.h>
int main()
{
    float n;
    printf("Enter a number : ");
    scanf("%f",&n);

    if(n==0)
        printf("Zero");

    else if(n<0)
        printf("%.2f is Negetive",n);

    else
        printf("%.2f is Positive",n);

    return 0;

}
