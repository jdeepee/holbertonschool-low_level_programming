char *string_ncopy(char *dest, const char *src, int n){
    char *saver = dest;

    while(n--){
        *saver++ = *src++;
    }

    return dest;
}
