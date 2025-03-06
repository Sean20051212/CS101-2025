/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[] = {0, 1, 2};
    char b[] = "ABC";
    float c[] = {1.1, 1.2, 1.3};

    FILE *file = fopen("a.bin", "wb");
    fwrite(a, sizeof(int), 3, file);   
    fwrite(b, sizeof(char), 3, file); 
    fwrite(c, sizeof(float), 3, file); 

    fclose(file); 

    file = fopen("a.bin", "rb");

    
    int ra[3];
    char rb[3];
    float rc[3];

    fread(ra, sizeof(int), 3, file);  
    fread(rb, sizeof(char), 3, file); 
    fread(rc, sizeof(float), 3, file); 

    fclose(file); 

    for (int i = 0; i < 3; i++) {
        printf("%d ", ra[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%c ", rb[i]);
    }
    printf("\n");

    for (int i = 0; i < 3; i++) {
        printf("%.1f ", rc[i]);
    }
    printf("\n");

    return 0;
}
