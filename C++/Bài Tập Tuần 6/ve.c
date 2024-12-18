#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=2*n;i++){
        for(int j=1;j<=2*n;j++){
            if(i==1||i==2*n||j==1||j==2*n){
                printf("%d",n);
            }
            else{
                printf("%d",n-1);
            }
        }
        printf("\n");
    }
}