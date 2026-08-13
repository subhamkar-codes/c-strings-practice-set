#include <stdio.h>
#include <string.h>

int main()
{
    char str[99];
    printf("Enter your srting: \n");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        str[i] = str[i] - 1;
    }
    printf("%s \n", str);

    return 0;
}