#include <stdio.h>

void dao(int n,int *b){
    int tmp=0;
    while(n>0){
        tmp=n%10;
        *b =*b*10+tmp;
        n/=10;
    }
}
int main(){
    int a,an=0,bn=0,b,in;
    scanf("%d",&a);
    if(a%10>a/100){
        printf("invalid");
        return 0;
    }
    else{
        dao(a,&an);
        b=a-an;
        dao(b,&bn);
        in =a-an+bn;
    }
    printf("%d",in);
    return 0;

}