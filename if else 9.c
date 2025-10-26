#include <stdio.h>

int main()
{
    char k;
    printf("Enter character: ");
    scanf("%c", &k);
    if((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
    {
        printf("'%c' is alphabet.", k);
    }
    else if(k >= '0' && k <= '9')
    {
        printf("'%c' is digit.", k);
    }
    else
    {
        printf("'%c' is special character.", k);
    }
    return 0;
}
