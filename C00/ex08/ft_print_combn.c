#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_combn(int n){
    char max = '9';
    char i;
    i = '9' - ;

    while(i < max){
        

    }

   

    while(i < '9'){
        ft_putchar(i);
        i++;
        ft_print_combn(n - 1);
    }
}

int main(){
    ft_print_combn(2);
}
