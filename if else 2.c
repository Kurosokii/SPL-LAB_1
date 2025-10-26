#include <stdio.h>

int main()
{
    int x, y, z;

    printf("Enter three digits: ");
    scanf("%d%d%d", &x, &y, &z);

    if(x > y)
        {printf("%d is maximum", x);}

    else if(y > z)
        {printf("%d is maximum", y);}

    else
        {printf("%d is maximum",z);}


    return 0;
}

