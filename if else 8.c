#include <stdio.h>

int main()
{
    char k;
    printf("Enter character: ");
    scanf("%c", &k);
    if(k=='a' || k=='e' || k=='i' || k=='o' || k=='u' ||
       k=='A' || k=='E' || k=='I' || k=='O' || k=='U')
    {
        printf("'%c' is Vowel.", k);
    }
    else if((k >= 'a' && k <= 'z') || (k >= 'A' && k <= 'Z'))
    {
        printf("'%c' is Consonant.", k);
    }
    else
    {
        printf("'%c' is not an alphabet.", k);
    }
    return 0;
}
