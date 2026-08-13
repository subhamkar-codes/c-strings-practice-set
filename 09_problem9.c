#include <stdio.h>
#include <string.h>

int main()
{
    char c;
    int contains = 0;
    char str[99];
    printf("Enter your srting: \n");
    scanf("%s", str);
    printf("Enter the character u want to find: \n");
    scanf(" %c", &c);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == c)
        {
            contains = 1;
            break;
        }
    }
    if (contains)
    {
        printf("yes it contains\n");
    }

    else
    {
        printf("is does not contain \n");
    }

    return 0;
}