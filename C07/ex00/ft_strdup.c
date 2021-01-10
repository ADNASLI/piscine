#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src){
    int i, length = 0;
    char *ptr;
    while(src[length]){
        length++;
    }
    i = 0;
    if(!(ptr = malloc(sizeof(*ptr) * length + 1))){
        return NULL;
    }
    while(src[i]){
        ptr[i] = src[i];
        i++;
    }
    ptr[i] = '\0';

    return (ptr);
}

int main(int argc, char **argv){    
    printf("%s\n",ft_strdup(argv[1]));
    return (0);
}
