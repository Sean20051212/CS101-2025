
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N;
    int lott[36];
    scanf("%d",&N);
    srand(1);
    for(int i = 0; i < N*7 ; i++ ){
        lott[i] = rand()%70;
    }
    FILE *fp;
    fp = fopen("lotto.txt","w+");
    fprintf(fp,"========= lotto649 =========\n");
    for(int k = 0; k < 5 ; k++ ){
        if ( k < N){
            fprintf(fp,"[%d]: %02d %02d %02d %02d %02d %02d %02d\n",k+1,lott[7*(k)],lott[7*(k)+1],lott[7*(k)+2],lott[7*(k)+3],lott[7*(k)+4],lott[7*(k)+5],lott[7*(k)+6]);
        }else{
            fprintf(fp,"[%d]: __ __ __ __ __ __ __\n",k+1);
        }
    }
    fprintf(fp,"========= csie@CGU =========\n");
    fclose(fp);
    return 0;
}
