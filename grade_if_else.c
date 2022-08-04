#include <stdio.h>
int main()
{
    float marks;
    char Grade;

    printf("Enter the obtained marks: ");
    scanf("%f",&marks);

    if(marks>=90)
    {
        Grade='A';
    }


    else if(marks>=80)
    {
        Grade='B';
    }



    else if(marks>=70)
    {
        Grade='C';
    }



    else if(marks>=60)
    {
        Grade='D';
    }

    else
    {
        Grade='F';
    }

    printf("Your grade letter is: %c",Grade);


    return 0;


}
