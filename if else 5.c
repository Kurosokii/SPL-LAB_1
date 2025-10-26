#include <stdio.h>

int main()
{
    int x;

    printf("Enter any number to check even or odd: ");
        scanf("%d", &x);

    if(!(x % 2))
    {printf("Number is Even.");}
        else
    {printf("Number is Odd.");}

    return 0;
}
