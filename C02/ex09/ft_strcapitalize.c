#include <stdio.h>


// Plus propre avec un efonction minuscule, une majuscule et la gestion de la premiere lettre
char *ft_strcapitalize(char *str){
    // Put every majuscule in minuscule
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] += 32;
        i++;
    }
// put the needed in majuscule
    i = 0;
    while(str[i] != '\0'){
        if(str[i] < '0' || (str[i] > '9' && str[i] < 'A') || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z'){
            if(str[i+1] >= 'a' && str[i+1] <= 'z'){
                str[i+1] -= 32;
            }
        }
        i++;
    }
    // put the first in majuscule
    if(str[0] >= 'a' && str[0] <= 'z'){
        str[0] -= 32;
    }
    return str;
}

int main (void){
	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	ft_strcapitalize(str);
	printf("%s", ft_strcapitalize(str));
}
