#include <stdio.h>
#include <string.h>

void tong2so(char so1[], char so2[]){
    if(so1[0]=='-'||so2[0]=='-'|| strcmp(so1, "0")==0||strcmp(so2, "0")==0){
        printf("-1");
        return;
    }
    int doDai1=strlen(so1);
    int doDai2=strlen(so2);
    char ketQua[105];
    int nho=0,tong=0;
    int i=doDai1-1,j=doDai2-1,a=104;
    ketQua[a--] = '\0';
    while (i >= 0 || j >= 0 || nho > 0) {
        int tachso1 = (i >= 0) ? so1[i--] - '0' : 0;
        int tachso2 = (j >= 0) ? so2[j--] - '0' : 0;
        tong = tachso1 + tachso2 + nho;
        nho =tong/10;
    }
    printf("%s",ketQua+a+1);

}
int main(){
    char s1[105],s2[105];
    scanf("%s",s1);
    scanf("%s",s2);
    tong2so(s1,s2);
    return 0;
}