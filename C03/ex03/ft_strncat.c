#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb){
    
    int i, j;
    i = 0, j = 0;

    while(dest[i] != '\0'){
        i++;
    }

    while(src[j] != '\0' && j < nb){
        dest[i] = src[j];
        j++;
        i++;
    }
    dest[i] = '\0';

    return dest;
}

int main(){
    
    char s1[] = "Akim";
    char s2[100] = "Je m'appelle ";
    printf("%s\n", ft_strncat(s2, s1, 3));
}
