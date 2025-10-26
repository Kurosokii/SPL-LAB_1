#include<stdio.h>

int main()
{
    int x;
    printf("Enter year : ");
    scanf("%d", &x);

    if(((x % 4 == 0) && (x % 100 !=0)) || (x % 400==0))
    {printf("LEAP YEAR");}

    else
    {printf("COMMON YEAR");}

return 0;
}
