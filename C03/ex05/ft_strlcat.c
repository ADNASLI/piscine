#include <stdio.h>

unsigned int ft_strlcat
 (char *dest, char *src, unsigned int size){
    
     unsigned int i, j;
     i = 0; j = 0;
     
     while(dest[i]){
        i++;
     }
     while(src[j] && i < size){
        dest[i] = src[j];
        j++;
        i++;
     }
    dest[i] = '\0';

     return (i);

 }
 int main(void){
/*
    char * src = "James!";
    char dest[20] = "My name is ";
    int size = 20;

    printf("%d\n", ft_strlcat(dest, src, size));
    printf("‰s\n", dest[]);*/
        char src[] = "Je mange du pain";
	char dest[50] = "Tous les matins, ";
	unsigned int size = sizeof(dest);
	printf("%u\n", ft_strlcat(dest, src, size));
	return(0);

    return 0;
 }
