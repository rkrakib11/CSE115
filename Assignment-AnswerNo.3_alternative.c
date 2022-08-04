#include<stdio.h>
#include<math.h>
int main()
{
    float x,y;

    printf("Enter the value of 'x': ");
    scanf("%f",&x);

    y = 2 * pow(x,3) + pow(x,2) -7;

    printf("\nThe value of 'y' is: %f\n\n",y);

    return 0;
}
