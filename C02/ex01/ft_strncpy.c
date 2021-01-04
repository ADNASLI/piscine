#include <stdio.h>

 
char *ft_strncpy(char *dest, char *src, unsigned int n){
    int i = 0;

    while(src[i] != '\0' && i < n){
        dest[i] = src[i];
        i++;
    }
    while(i < n){
        dest[i++] = '\0';
    }
    return dest;
}

int main(){
    
    char *src = "I'm James and I'm a psychopath";
    char dest[100];
    int n = 10;
    printf("%s\n",ft_strncpy(dest, src, n));
    return 0;
}
