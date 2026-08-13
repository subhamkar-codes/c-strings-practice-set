#include <stdio.h>
int strlen(char str[])
{
    int i = 0, count;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    count = i - 1;
    return count;
}

int main()
{
    char str[99];
    printf("Enter your srting: \n");
    scanf("%s", str);
    /*printf("your srting is %s\n", str);*/
    printf("your srting is %d\n", strlen(str));
    return 0;
}