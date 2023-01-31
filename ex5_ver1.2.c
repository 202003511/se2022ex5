#include <stdio.h>
#include <string.h>

int main (){
    char str[] = "hello";
    size_t len;
    len = strlen(str);
    printf("%s,len = %d",str,len);
    return 0 ;
}