#include <stdio.h>

int main()
{
    int x;

    printf("Enter a digits: ");
    scanf("%d", &x);

    if(x > 0)
    {printf("positive");}

    else if(x < 0)
    {printf("negative");}

    else if(x == 0)
    {printf("zero");}

}
    return 0;
