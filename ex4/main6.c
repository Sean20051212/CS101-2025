
#include <stdio.h>

int fac (int i){
    if (i==1) return 1;
    return i*fac(i-1);
}

int main()
{
    int num = 6;
    printf("fac %d = %d \n",num,fac(num));
    return 0;
}