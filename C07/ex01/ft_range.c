#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max){
    int length = max - min;
    int i = 0;
    int *tab;

    if(!(tab = malloc(sizeof(*tab) * length)) || min > max){
        return (NULL);
    }
    else{
        while(i < length){
            tab[i] = i + min;
            i++;
        }
    }

    return (tab);
}

int main(void){
    int i = 0;
    int * tab = ft_range(20, 15);
    while(tab[i]){
        printf("%d\n", tab[i]);
        i++;
    }
    return (0);
}
