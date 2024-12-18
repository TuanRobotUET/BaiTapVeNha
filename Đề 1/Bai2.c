#include <stdio.h>
#include <math.h>

void sapxep(int n,int a[]){
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(a[i]>a[j]){
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    sapxep(n,a);
    int min=1000000;
    for(int i=0; i<n-1; i++){
        min=fmin(min,a[i+1]-a[i]);
    }
    printf("%d",min);

    
    return 0;
}