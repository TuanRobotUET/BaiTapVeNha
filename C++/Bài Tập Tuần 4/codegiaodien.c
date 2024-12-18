#include <stdio.h>
typedef struct SinhVien SinhVien;

struct SinhVien{
    char hoTen[50];
    char lop[10];
    char sdt[10];
    double gpa;

};
int main(){
    SinhVien a;
    printf("NHAP THONG TIN CUA BAN\n");
    printf("NHAP HO TEN : ");
    gets(a.hoTen);
    printf("NHAP SDT : ");
    gets(a.sdt);
    printf("NHAP LOP : ");
    gets(a.sdt);
    scanf("%lf",&a.gpa);
    printf("%s",a.hoTen);
    return 0;
}