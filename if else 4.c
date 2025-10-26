#include<stdio.h>

int main()
{
    int x;

    printf("Enter a digits: ");
    scanf("%d", &x);
    if(!(x % 5) && (x % 11!=0))
        printf("Number is divisible by 5");
    else if(!(x % 11) && (x % 5!=0))
        printf("Number is divisible by 11");
     else if(!(x % 5) && !(x % 11))
        printf("Number is divisible by both 5 & 11");
    else
        printf("Number is not divisible by 5 and 11");

    return 0;
}
