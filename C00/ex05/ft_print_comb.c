#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_comb(void){
    char u, d, c;
    c = '0';
    while(c <= '7'){
        d = c + 1;
        while(d <= '8'){
            u = d + 1;
            while(u <= '9'){
                ft_putchar(c);
                ft_putchar(d);
                ft_putchar(u);
                if(c != '7' || d != '8' || u != '9'){
                    ft_putchar(',');
                    ft_putchar(' ');
                }
                u++;
            }
            d++;
        }
        c++;
    }
}

int main(){
    ft_print_comb();
}
