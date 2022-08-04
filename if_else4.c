#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    if(n>0)
    {
        if(n<5)
            printf("Number is greater than 0 but less than 5.\n");
        else
            printf("Number is greater than 5\n.");
    }

    return 0;
}
