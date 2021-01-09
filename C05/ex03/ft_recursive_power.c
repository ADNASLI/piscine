#include <stdio.h>

int ft_recursive_power(int nb, int power){
    int i = 0;
    int res = 0;

    if(nb < 0){
        return 0;
    }
    if(nb == 0 && power == 0){
        return 1;
    }
    if(power == 0){
        return 1;
    }
    
    res += nb * ft_recursive_power(nb, power-1);
    printf("%d\n", res);
    return res;
}

int main(void){
    printf("%d",ft_recursive_power(5, 4));
}
