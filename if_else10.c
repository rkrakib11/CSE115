#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the lenght of the three sides of a triangle:"),
    scanf("%d%d%d",&a,&b,&c);


    if(a+b>c&&b+c>a&&c+a>b)
        printf("The triangle is valid.");
    else
        printf("The triangle is not valid.");
    return 0;
}
