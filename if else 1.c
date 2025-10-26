#include <stdio.h>

int main()
{
    int x, y;

    printf("Enter two digits: ");
    scanf("%d%d", &x, &y);

    if(x > y)
    {printf("%d is maximum", x);}

    else if(y > x)
    {printf("%d is maximum", y);}

    else if(x == y)
    {printf("Both are equal");}

    return 0;
}
