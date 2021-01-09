#include <stdio.h>

int ft_strlen(char *str){
    int i;

    i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

int main(void){
    char *str = "Je veux un mont d'or";
    printf("%d\n", ft_strlen(str));
}
