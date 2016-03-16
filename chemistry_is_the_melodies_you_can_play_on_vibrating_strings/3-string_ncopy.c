char *string_ncopy(char *dest, const char *src, int n){
    char *saver = dest;

    while(n--)
        *saver++ = *src++;
    *saver = '\0';

    return dest;
}
