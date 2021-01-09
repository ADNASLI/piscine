#include <stdio.h>

int ft_iterative_factorial(int nb){
    int i = nb;
    int res = 1;
    while(i > 0){
        res = res * i;
        i--;
    }
    return res;
}

int main(void){
    printf("%d",ft_iterative_factorial(5));
    return 0;
}


