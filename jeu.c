#include<stdio.h>
#define b 25


int main()
{
    int x = 5 ;

    while (x != b)
    {
        printf("Guess the number: ");
        scanf("%d", &x);

        if ( x < b ) 
        {
            printf("Too Small\n");
        }

        else if ( x > b ) 
        {
            printf("Too big\n");
            
        }
    }

    if (x == b) 
    {
        printf("Bingo!! You Got it\n");
    }

    return 0;

}

