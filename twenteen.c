#include<stdio.h>

int main (){

    int n = 5;

    for(int i = 1;  i <= n*2; i++){

        int star = i ;

        if(star > n){
            star = 2*n - i;
        }

        for(int j = 1 ; j <=star; j++){
            printf("*");
        }

        for(int j = 1 ; j <= n-star ; j++){
            printf(" ");
        }

        for(int j = 1 ; j <= n-star ; j++){
            printf(" ");
        }


        for(int j = 1 ; j <= star ; j++){
            printf("*");
        }
        
        printf("\n");
    }

    return 0 ;

}