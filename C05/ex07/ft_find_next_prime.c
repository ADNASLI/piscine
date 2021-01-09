#include <stdio.h>

int ft_find_next_prime(int nb){
    int i = 2;

    while(i < nb/2){
        if(nb % i == 0)
        {
            return ft_find_next_prime(nb + 1);
        }
        i++;
    }
    return nb;
}

int main(void){
    printf("%d", ft_find_next_prime(24));
}
