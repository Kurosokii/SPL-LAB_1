#include <stdio.h>

int main()
{
    char k;
    printf("Enter character: ");
    scanf("%c", &k);if(k >= 'A' && k <= 'Z')
    {
        printf("'%c'uppercase.", k);
    }
    else if(k >= 'a' && k <= 'z')
    {
        printf("'%c' is lowercase alphabet.", k);
    }
    else
    {
        printf("'%c' is not an alphabet.", k);
    }return 0;
}
