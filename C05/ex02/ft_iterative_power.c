#include <stdio.h>

int ft_iterative_power(int nb, int power){
    int i = 0;
    int res = 1;

    if(nb < 0){
        return 0;
    }
    if(nb == 0 && power == 0){
        return 1;
    }
    while(i < power){
        res *= nb;
        i++;
    }
    return res;
}

int main(void){
    ft_iterative_power(5, 4);
}
