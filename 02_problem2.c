#include <stdio.h>

int main()
{
    char str[6];
   /* printf("Enter your srting: \n");
   scanf("%s", str);   
    printf("your srting is %s\n", str);*/

    for (char i = 0; i < 6; i++)
    {
        printf("Enter your srting: \n");
        scanf("%c", &str[i]);
        fflush(stdin);
    }
    str[6] = '\0';
    printf("your srting is %s\n", str);
    return 0;
}