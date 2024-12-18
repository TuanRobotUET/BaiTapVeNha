void rFilter(char *s) {
    char *p = s + strlen(s) - 1;
    while(p >= s) {
        if(!(*p >= 'A' && *p <= 'Z') && !(*p >= 'a' && *p <= 'z')) {
            *p = '_';
            p--;
        }
        else break;
    }
}