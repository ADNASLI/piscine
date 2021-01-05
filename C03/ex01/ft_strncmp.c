#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){

    int i;
    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n){
        i++;
    }
    return ((unsigned)s1[i] - (unsigned)s2[i]);
}

int main(){
    char str1[] = "This is the sAme";
    char str2[] = "This is the sameA";

    printf("%d\n", ft_strncmp(str1, str2, 14));
}
