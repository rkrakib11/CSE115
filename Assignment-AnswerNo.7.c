//Answer No.2
#include<stdio.h>
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=i; j>=1; j--)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }

return 0;
}
