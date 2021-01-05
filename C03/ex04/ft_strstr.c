#include <stdio.h>

int ft_find(char *str, char *to_find, int i){
    int j = 0;
    while(to_find[j] != '\0'){
        if(str[i + j] != to_find[j]){
            return 1;
        }
        j++;    }
    return 2;
 }

int ft_strstr(char *str, char *to_find){
    int i;
    i = 0;

    while(str[i] != '\0'){
        if(str[i] == to_find[0]){
            if(ft_find(str, to_find, i) == 2){
                return (i);
            }      
        }    
        i++;
    }
    return (0);
}

int main(){

    char str[] = "try to find this word"; 
    char to_find[] = "find"; 
    printf("%d", ft_strstr(str, to_find));
    return 0;
}
