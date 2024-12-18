#include <stdio.h>

int main(){
    float vl,vx,tl,tx,s,vtb;
    scanf("%f%f%f",&vl,&tl,&vx);
    if(vl<=0&&vx<=0&&tl<=0) printf("-1");
    else {
    s = vl*tl/60;
    tx =s/vx;
    vtb=(2*s)/(tl/60+tx);
    printf("%.2f",vtb);
    }
}