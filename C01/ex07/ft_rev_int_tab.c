#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
    int i = 0;
    int len = size - 1;
    int swap;

    while(i < size / 2){
        swap = tab[i];
        tab[i] = tab[len];
        tab[len] = swap;
        i++;
        len--;
    }

    i = 0;
    while(i < size){
        printf("%d ", tab[i]);
        i++;
    }
}

int main(){
    int tab[5] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(tab, 5);
}
