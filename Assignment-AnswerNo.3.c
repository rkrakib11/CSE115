#include<stdio.h>
int main()
{
    float x,y;

    printf("Enter the value of 'x': ");
    scanf("%f",&x);

    y = 2*(x*x*x) + (x*x)-7;

    printf("\nThe value of 'y' is: %.4f\n\n",y);

    return 0;
}
