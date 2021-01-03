#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_combn(int n){
    char i;
    i = '0';

   

    while(i < '9'){
        ft_putchar(i);
        i++;
        ft_print_combn(n - 1);
    }
}

int main(){
    ft_print_combn(2);
}
