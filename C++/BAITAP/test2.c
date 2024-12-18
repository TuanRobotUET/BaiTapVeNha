#include <stdio.h>
#include <string.h>

int check(char n[] ){
    int doDai=strlen(n);
    if(doDai>10||doDai==0){
        return 0;
    }
    for (int i = 0; i < doDai; i++) {
        if (!((n[i] >= '0' && n[i] <= '9') || (n[i] >= 'A' && n[i] <= 'F'))) {
            return 0;
        }
    }
    return 1;
}
void chuyendoi(char chuoi16[],char chuoi2[]){
    chuoi2[0] = '\0';
    int doDai=strlen(chuoi16);
    for (int i = 0; i < doDai; i++) {
        switch (chuoi16[i]){
            case '0': strcat(chuoi2, "0000"); break;
            case '1': strcat(chuoi2, "0001"); break;
            case '2': strcat(chuoi2, "0010"); break;
            case '3': strcat(chuoi2, "0011"); break;
            case '4': strcat(chuoi2, "0100"); break;
            case '5': strcat(chuoi2, "0101"); break;
            case '6': strcat(chuoi2, "0110"); break;
            case '7': strcat(chuoi2, "0111"); break;
            case '8': strcat(chuoi2, "1000"); break;
            case '9': strcat(chuoi2, "1001"); break;
            case 'A': strcat(chuoi2, "1010"); break;
            case 'B': strcat(chuoi2, "1011"); break;
            case 'C': strcat(chuoi2, "1100"); break;
            case 'D': strcat(chuoi2, "1101"); break;
            case 'E': strcat(chuoi2, "1110"); break;
            case 'F': strcat(chuoi2, "1111"); break;
        }
    }
}
void boSo0(char chuoi2[]) {
    int doDai = strlen(chuoi2);
    int chiso=0;
    while (chiso < doDai && chuoi2[chiso] == '0') {
        chiso++;
    }
    if (chiso == doDai) {
        strcpy(chuoi2, "0");
    } else {
        for (int i = 0; i < doDai - chiso; i++) {
            chuoi2[i] = chuoi2[chiso + i];
        }
        chuoi2[doDai - chiso] = '\0';
    }
}
int main(){
    char chuoi16[21];
    char chuoi2[41];
    fgets(chuoi16,sizeof(chuoi16),stdin);
    chuoi16[strcspn(chuoi16, "\n")] = 0;
    char chuoi16KhongDauCach[21];
    int j = 0;
    for (int i = 0; chuoi16[i] != '\0'; i++) {
        if (chuoi16[i] != ' ') {
            chuoi16KhongDauCach[j++] = chuoi16[i];
        }
    }
    chuoi16KhongDauCach[j] = '\0';

    if (check(chuoi16KhongDauCach) == 0) {
        printf("-1\n");
        return 0;
    }
    if(check(chuoi16)==0){
        printf("-1");
        return 0;
    }
    chuyendoi(chuoi16KhongDauCach, chuoi2);
    boSo0(chuoi2);
    printf("%s",chuoi2);
    
    return 0;
}