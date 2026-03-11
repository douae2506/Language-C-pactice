#include<stdio.h>

int main()
{
    int x,i;
    int factorielle = 1;

    printf("Enter a number: ");
    scanf("%d", &x);

    if (x < 0)
    {
        printf("Should be positive !");
    }
    else {
        for ( i = 1; i<=x ; i ++)
        {
            factorielle = i * factorielle;
        }
        printf("%d", factorielle);
    }
    return 0;

}