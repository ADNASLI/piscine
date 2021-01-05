#include <stdio.h>

int ft_str_is_alpha(char *str){
    int res = 1;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'){
            res = 0;
        }
    i++;
    }

    return res;
}

int main(){
    char *str = "A KIM";
    printf("%d\n", ft_str_is_alpha(str));
}


