#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_print_comb2(void){
    char first, second;
    char a, b, c, d;
    first = 0;

    while (first <= 98){
        second = first + 1;
        while(second <= 99){
            if(first < 10)
            {
                ft_putchar('0');
                ft_putchar(first + '0');
            }
            else{
                a = first / 10;
                b = first % 10;
                ft_putchar(a + '0');
                ft_putchar(b + '0');
            }
            ft_putchar(' ');
            if(second < 10)
            {
                ft_putchar('0');
                ft_putchar(second + '0');
            }
            else{
                c = second / 10;
                d = second % 10;
                ft_putchar(c + '0');
                ft_putchar(d + '0');
            }
            if (((a != 9) || (c != 9)) || ((b != 8) || (d != 9))){
                ft_putchar(',');
                ft_putchar(' ');
            }
            second++;
        }
        first++;
    }
}

int main(){
    ft_print_comb2();
    return 0;
}
