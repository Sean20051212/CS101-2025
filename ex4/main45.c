
#include <stdio.h>

void hanoi_tower(int n,char tower1,char tower2,char tower3){
    if (n==1){
        printf("\n Move disk1 from rod %c to %c",tower1,tower2);
        return;
    }
    hanoi_tower(n-1,tower1,tower3,tower2);
    printf("\n Move disk%d from rod %c to %c",n,tower1,tower2);
    hanoi_tower(n-1,tower3,tower2,tower1);
}

int main()
{
    int i =3;
    hanoi_tower(i,'A','B','C');
    return 0;
}