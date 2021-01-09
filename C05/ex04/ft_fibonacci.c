#include <stdio.h>

int ft_fibonacci(int index){
    int res = 0;
    if(index < 0){
        return -1;
    }
    if(index == 0){
        return 0;
    }
    if(index == 1 || index == 2){
        return 1;
    }
    res = ft_fibonacci(index - 2) + ft_fibonacci(index - 1);
    return res;
}

int main(void){
    printf("%d\n", ft_fibonacci(10));
}
