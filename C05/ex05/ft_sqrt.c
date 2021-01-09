#include <stdio.h>

int ft_sqrt(int nb){
    int i = 0;

    while(i < nb/2){
        if(nb == i * i){
            return i;
        }
        i++;
    }
    return 0;
}

int main(void){
    printf("%d",ft_sqrt(63));
}
