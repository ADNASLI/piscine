#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c){
    write(1, &c, 1);
}

int ft_strlen(char *base){
    int i = 0;
    while(base[i]){
        i++;
    }
    return i;
}

void ft_base(int nbr, char *base){
    int length = ft_strlen(base);
    int i = nbr, j;
    char minC = base[0]; 
    char maxC = base[length - 1];
    int res = minC;
    int count = 0;
    printf("%d\n", length);
    printf("%d\n", i);
    printf("%d\n", count);
    while(i > 0){
        if((i % length) == 0){
            count++;
        }
        i--;
    }
    printf("%d", count);
}

int main (void){
    int nbr = 42;
    char *base = "01";
    ft_base(nbr, base);
}
