#include <stdio.h>

int main(){
    int n=5;
    int cach=0;
    for (int i = 1; i <= n; i++) {
        for(int j=1; j<=cach; j++){
            printf(" ");
        }
        for(int j=i; j<=5; j++){
            printf("*");
        }
        cach +=2;
        printf("\n");
    }
    cach -= 2;
    for (int i = n; i >=0 ; i--) {
        for(int j=1; j<=cach; j++){
            printf(" ");
        }
        for(int j=i; j<=5; j++){
            printf("*");
        }
        cach -=2;
        printf("\n");
    }
}