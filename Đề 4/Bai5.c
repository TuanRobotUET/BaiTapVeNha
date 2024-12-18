#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void processString(char *str) {
    int len = strlen(str);
    int digits = 0;
    
    for(int i = 0; i < len; i++) {
        if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
    }
    
    for(int i = 0; i < len/2; i++) {
        char temp = str[i];
        str[i] = str[len-1-i];
        str[len-1-i] = temp;
    }
    
    printf("%s %d\n", str, digits);
}

int main() {
    char filename[100];
    scanf("%s", filename);
    
    FILE *fp = fopen(filename, "r");
    if(!fp) return 1;
    
    int n;
    fscanf(fp, "%d\n", &n);
    
    char str[1001];
    for(int i = 0; i < n; i++) {
        fgets(str, 1001, fp);
        int len = strlen(str);
        if(str[len-1] == '\n') str[len-1] = '\0';
        
        processString(str);
    }
    
    fclose(fp);
    return 0;
}