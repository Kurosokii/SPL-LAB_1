#include <stdio.h>

int main()
{
    char k;
    printf("Enter character: ");
    scanf("%c", &k);
    if((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
    {printf("an ALPHABET.");}
    else
    {printf("NOT ALPHABET.");}
    return 0;
}
