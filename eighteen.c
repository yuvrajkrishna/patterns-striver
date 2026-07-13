#include <stdio.h>

int main ( ) {

    int n = 5;
    
    char ch = 'E';
   

    for(int i = 1; i <= n ; i++){

        
        for(int j = 1 ; j <= i ; j++){
            printf("%c ",ch);
            ch++;
        }
        
        ch-=(i+1);
        printf("\n");

    }

   

    return 0 ; 

}