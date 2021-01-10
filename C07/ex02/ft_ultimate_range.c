#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i;
    int *tab;
    if(min >= max)
    {
        *range = NULL;
        return (0);
    }
    if(!(tab = malloc(sizeof(*tab) * (max - min))))
        return (-1);
    i = 0;
    while(i < (max - min))
    {

        tab[i] = min;
        i++;
    }
    *range = tab;
    return (i);
}

int main(void){

    int **range;
    printf("%d\n",ft_ultimate_range(range, 2, 10));
    return (0);
}
