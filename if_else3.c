#include<stdio.h>
int main()
{
    char c;

    printf("Enter a character: ");
    scanf("%c",&c);

    if(c=='A'||c=='a')
        printf("You have pressed A");
    else if(c=='B'||c=='b')
        printf("You have pressed B");
    else if(c=='C'||c=='c')
        printf("You have pressed C");
    else
        printf("You have pressed different key.");


    return 0;


}
