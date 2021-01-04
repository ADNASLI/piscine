#include <stdio.h>

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    if(src[i] == '\0'){
        dest[i] = '\0';
    }

    printf("%s", dest);

    return (dest);

}

int main(){
    int i = 0;
    char src[] = "My name is james and I'm a psychopath";
    char dest[100]; 
    ft_strcpy(dest, src);
    return (0);
}
