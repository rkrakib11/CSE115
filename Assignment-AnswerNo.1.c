#include<stdio.h>
int main()
{
    int n,f_digit,l_digit,product;

    printf("Enter a four-digit number as input: ");
    scanf("%d",&n);

    f_digit = n/1000;
    l_digit = n%10;
    product = f_digit*l_digit;

    printf("\nProduct of the first and last digit of the number is: %d\n\n",product);

    return 0;
}
