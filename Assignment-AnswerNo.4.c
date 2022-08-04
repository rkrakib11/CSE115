#include<stdio.h>
int main()
{
    int m1,c1,m2,c2,d,m,c;

    printf("Length of the first item in meters and centimeters: ");
    scanf("%d%d",&m1,&c1);

    printf("Length of the second item in meters and centimeters: ");
    scanf("%d%d",&m2,&c2);

    d = (m1-m2)*100+(c1-c2);
    m = d/100;
    c = d%100;

    printf("\nLength difference of the the two items: %d meter/s and %d centimeter/s\n\n",m,c);

    return 0;
}

