#include <unistd.h>

void ft_putchar(char c){
    write(1, &c, 1);
}

int ft_strcmp(char *s1, char *s2){
    int i = 0;

    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i]){
        i++;
    }
    return ((unsigned int)s1[i] - (unsigned int)s2[i]); 
}

void ft_display(int choix, char **argv){
    int i = 0;
    while(argv[choix][i]){
        ft_putchar(argv[choix][i]);
        i++;
    }
}

void ft_sort_params(int argc, char** argv){
    int i, j;
    char *temp;
    i = 1;
    while(i < argc){
        j = i + 1;
        while(argv[j]){
            if(ft_strcmp(argv[i], argv[j]) > 0){
                temp = argv[i];
                argv[i] = argv[j];
                argv[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(int argc, char **argv){
    int i = 1;
    ft_sort_params(argc, argv);
    while(i < argc){
        ft_display(i, argv);
        ft_putchar('\n');
        i++;
    }
    return (0);
}
