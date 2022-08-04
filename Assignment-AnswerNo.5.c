#include<stdio.h>
int main()
{
    float d,d1,d2,d3,d4;

    printf("Enter the distance between two cities(in km.): ");
    scanf("%f",&d);

    d1 = d*1000;
    printf("\nThe distance between two cities (in meter) = %f\n",d1);

    d2 = d1*(3.28);
    printf("The distance between two cities (in feet) = %f\n",d2);

    d3 = d1*(39.37);
    printf("The distance between two cities (in inch) = %f\n",d3);

    d4 = d1*100;
    printf("The distance between two cities (in cm.) = %f\n",d4);

    return 0;
}

