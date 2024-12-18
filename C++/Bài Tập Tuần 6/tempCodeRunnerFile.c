#include <stdio.h>

void sapxep(int a[],int n){
    int tmp;
    for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]){
            tmp=a[i];
            a[i]=a[i+1];
            a[i+1]=tmp;
        }
    }
}
int main(){
    int so;
    scanf("%d",&so);
    int a[so];
    for(int i=0;i<so;i++){
        scanf("%d",&a[i]);
    }
    sapxep(a,so);
    for(int i=0;i<so;i++){
        printf("%d ",a[i]);
    }
}