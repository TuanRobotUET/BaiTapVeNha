#include <stdio.h>
#include <math.h>

int main(){
    int n;
    scanf("%d",&n);
    char a[n];
    scanf("%s",a);
    int u=0,d=0,l=0,r=0;
    for(int i=0; i<n; i++){
        if(a[i]=='U') u++;
        if(a[i]=='D') d++;
        if(a[i]=='L') l++;
        if(a[i]=='R') r++;
    }
    double x = sqrt((r-l)*(r-l)+(u-d)*(u-d));
    printf("%.2lf",x);
    return 0;
}