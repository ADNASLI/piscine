#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

int ft_strlen(char *base){
    int i;

    i = 0;
    while(base[i]){
        i++;
    }
    return i;
}

int repeat(char *base){
    int i, j;

    i = 0;
    while(base[i]){
        j = 0;
        while(base[j]){
            if(base[i] == base[j] && i != j){
                return 1;
            }
            j++;
        }
        i++;
    }
    return 0;
}

int ft_checkBase(char *base){
    int i;
    i = 0;

    while(base[i]){
        if(base[i] == '-' || base [i] == '+'){
            return 1;
        }
        i++;
    }
    if(i <= 1){
        return 1;
    }
    if(repeat(base) == 1){
        return 1;
    }
    return 0;
}

void ft_putnbr(int nbr, char*base){
        if(nbr < 0){
            ft_putchar('-');
            nbr *= -1;
        }
        if(nbr > 9){
            ft_putnbr(nbr / 10, base);
            ft_putchar(nbr % 10 + 48);
        }
        else{
            ft_putchar(nbr + 48);
        }
}

void ft_putnbr_base(int nbr, char *base){
    if(ft_checkBase(base) == 0){
       ft_putnbr(nbr, base); 
    }
    else{
        ft_putchar('n');
    }
}

int main(void){
    ft_putnbr_base(-142, "01");
}
