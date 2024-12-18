#include <stdio.h>
#include <string.h>

int main() {
    int n,fn;
    scanf("%d",&n);
    int f[n];
    f[0]=1;
    f[1]=1;
    fn=2*f[n-1]+f[n-2]+1;
    printf("%d",fn);
    return 0;
}
