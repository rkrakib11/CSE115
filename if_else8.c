#include<stdio.h>
int main()
{
    char ch;
    printf("Input a character: ");
    scanf("%c",&ch);

    if(ch>=48&&ch<=57)
        printf("You have entered a Digit");
    else if(ch>=65&&ch<=90)
        printf("you have entered a Uppercase Alphabet");
    else if(ch>=97&&ch<=122)
        printf("You have entered a Lowercase Alphabet");
    else
        printf("You have entered a Special Character");
    return 0;

}
