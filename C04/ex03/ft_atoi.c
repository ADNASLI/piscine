#include <stdio.h>

int ft_atoi(char *str){
    int i, signe, nbr;

    i = 0;
    signe = 1;
    nbr = 0;

    while(str[i] == ' ' && str[i]){
        i++;
    }
    while((str[i] == '-' || str[i] == '+') && (str[i])){
        if(str[i] == '-'){
            signe *= -1;
        }
        i++;
    }
    while((str[i] >= '0' && str[i] <= '9') && (str[i])){
        nbr *= 10;
        nbr += str[i] - 48;
        i++;
    }

    return signe * nbr;
}

int main(){
    char *str = "   ---+--+1234ab567";
    printf("%d\n", ft_atoi(str));
}

