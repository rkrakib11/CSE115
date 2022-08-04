#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");

    scanf("%d",&n);

    if(n%7==0)
        printf("%d is a multiple of 7");
    else
        printf("%d is not a multiple of 7");
    return 0;
}
