#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_sort_int_tab(int *tab, int size){
    int i = 0, j, swap = 0;
    while(i < size){
        j = 0;
        while(j < size){
            if(tab[j] < tab[i]){
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
    
    i = 0;
    while(i < size){
        printf("%d ", tab[i]);
        i++;
    }
}

int main(){
    int tab[5] = {65, 45, 98, 12, 1};
    ft_sort_int_tab(tab, 5);
}
