#include <stdio.h>

int main()
{
    int l = 50;
    char c[l];
    fgets(c, l, stdin);
    printf("%s", c);
    return 0;
}

