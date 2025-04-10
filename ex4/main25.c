
#include <stdio.h>

int str_len(char* str){
    if (!*str) return 0;
    return 1+str_len(str + 1);
}

int main()
{
    char s[]="Stop using IU as examples.";
    printf("str length is %d",str_len(s));
    return 0;
}