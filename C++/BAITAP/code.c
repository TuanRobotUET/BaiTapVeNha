#include <stdio.h>

int main(){
    
    int a[10];
    int so,i=0;
    printf("NHAP SO CAN CHUYEN DOI : ");
    scanf("%d",&so);
    while(so>0){
        a[i]=so%2;
        so /=2;
        ++i;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",a[j]);
    }
    return 0;
}