#include <stdio.h>

int ft_recursive_factorial(int nb){
    int res = 0;
    if(nb == 1){
        return 1;
    }
    res += nb * ft_recursive_factorial(nb - 1);
        
    return res;
}

int main(void){
    printf("%d",ft_recursive_factorial(5));
    return 0;
}


