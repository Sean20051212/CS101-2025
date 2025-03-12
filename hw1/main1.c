#include <stdio.h>
#include <string.h>

int main() {
    char test[30], count[60]; 
    scanf("%29s", test); 

    int len = strlen(test);
    int c = 0, t = 1; 

    for (int i = 1; i <= len; i++) { 
        if (test[i] == test[i - 1]) {  
            t++; 
        } else { 
            count[c++] = test[i - 1]; 
            count[c++] = t + '0'; 
            t = 1;
        }
    }

    count[c] = '\0'; 
    printf("%s\n", count); 

    return 0;
}
