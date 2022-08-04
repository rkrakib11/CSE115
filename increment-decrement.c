#include <stdio.h>
int main()
{
    int a=100;
    int b,c;
    b=--a;
    c=b--;
    printf("%d %d %d",a,b,c);
    return 0;
}
