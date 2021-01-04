#include <unistd.h>
void ft_putchar(char c){
    write(1, &c, 1);
}

void ft_putstr(char *str){
    int i = 0;
    int count = 0;
//    while(str[count] != '\0'){
//        count++;
//    }

    while(str[i] != '\0'){
        ft_putchar(*(str + i));
        i++;
    }
}

int main(){
    char *str = "My name is James and I'm a psychopath";
    ft_putstr(str);
}
