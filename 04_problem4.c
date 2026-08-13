#include <stdio.h>
char* slice(char str[],int m,int n)
{
    char i = 0, count;
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n-m] = '\0';
    return str;
}

int main()
{
    char str[99];
    int m ,n;
    printf("Enter your srting: \n");
    scanf("%s", str);
    /*printf("your srting is %s\n", str);*/
    printf("Enter start and end index: \n");
    scanf("%d %d",&m, &n);
    printf("%s\n",slice(str, m , n));
    return 0;
}