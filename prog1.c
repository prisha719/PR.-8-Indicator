#include <stdio.h>

int main()
{
    char str[100];

    printf("Enter any string: ");
    gets(str);

    int len = 0, *p;
    p = &len;
    
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    printf("The length is: %d", *p);

    return 0;
}