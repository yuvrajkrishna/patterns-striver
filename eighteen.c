#include <stdio.h>

int main ( ) {

    int n = 5;
    
    char ch = 'E';
    int num = 1;

    for(int i = 1; i <= n ; i++){

        
        for(int j = 1 ; j <= i ; j++){
            printf("%c ",ch);
            ch++;
        }
        num++;
        ch-=num;
        printf("\n");

    }

   

    return 0 ; 

}