#include <stdio.h>

int main()
{
    int* ip;
    int var = 10;
    ip = &var;
    printf("%p\n", ip);
    printf("%d\n", *ip);
    return 0;
}
