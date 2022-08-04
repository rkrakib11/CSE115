//Answer-No.4
#include<stdio.h>
int main()
{
    int n,d,t,s=0;
    printf("Input a number: ");
    scanf("%d",&n);
    t=n;

    do
    {
        d=n%10;
        s=(s*10)+d;
        n=n/10;
    }
    while(n>0);

    if(t==s)
        printf("%d is a palindrome number.",t);
    else
        printf("%d is not a palindrome number.",t);
    return 0;
}
