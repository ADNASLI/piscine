#include <stdio.h>

int ft_str_is_numeric(char *str){

    int i = 0;
    int res = 1;
    while(str[i] != '\0'){
        if(str[i] < '0' || str[i] > '9'){
            return 0;
        }
        i++;
    }

    return 1;
}

int main(){

    char *str = "12356a";
    printf("%d\n", ft_str_is_numeric(str));
    return 0;
}
