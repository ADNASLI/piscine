#include <stdio.h>

char *ft_strcat(char *dest, char *src){
    
    int i, j;
    i = 0, j = 0;

    while(dest[i] != '\0'){
        i++;
    }

    while(src[i] != '\0'){
        dest[i] = src[j];
        j++;
        i++;
    }

    return dest;
}


int main(){
    
    char s1[] = "Akim";
    char s2[100] = "Je m'appelle ";
    printf("%s\n", ft_strcat(s2, s1));
}
