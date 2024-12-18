#include <stdio.h>

int main(){
    int m,d,y;
    scanf("%d/%d/%d",&m,&d,&y);
    if (y<=0||m<=0){
        printf("0");
        return 0;
    }
    if (d<1||d>12){
        printf("0");
        return 0;
    }
    if (d==1||d==3||d==5||d==7||d==8||d==10||d==12){
        if(m!=31){
            printf("0");
            return 0;
        }
    }
    if(d==4||d==9||d==5||d==11){
        if(m!=30){
            printf("0");
            return 0;
        }
    }

    if(y%400==0||(y%400!=0&&y%100!=0&&y%4==0)){
        if(m>29){
            printf("0");
            return 0;
        }
    }
    else {
        if(m>28){
            printf("0");
            return 0;
        }
    }
    printf("1");
    return 0;
}