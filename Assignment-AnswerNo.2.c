#include<stdio.h>
int main()
{
    float basic_s,d,h,g;

    printf("Input basic salary of Mr.Alam is: ");
    scanf("%f",&basic_s);

    d = basic_s *(40.0/100);
    h = basic_s *(20.0/100);
    g = basic_s + d + h;

    printf("\nThe gross salary of Mr.Alam is: %.2f\n",g);

    return 0;
}
