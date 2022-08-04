#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n%2==0&&n%3==0)
        printf("Divisible by both");
    else if(n%2==0||n%3==0)
        printf("Divisible by 2 or 3");
    else
        printf("Not divisible by 2 or 3");
    return 0;
}
