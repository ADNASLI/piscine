#include <stdio.h>
#include <stdlib.h>

char * ft_strjoin(int size, char **strs, char *sep){
    int length;
    int i, j;
    char *string;

    if(size == 0){ //equivalent de 0 car nom du fichier compris
        return "";
    }
// Calcul de la longueur de la string de sortie
    length = 0;
    i = 1;
    while(i < size){
        j = 0;
        while(strs[i][j]){
            j++;
        }
        length += j;
        i++;
    }
    length += (size - 1); //ajoute le nb de sep //-1 parcque un sep de moins que les strings

// Malloc de ma futur string

    if(!(string = malloc(sizeof(*string) * length + 1)) || size == 1){
        return ("Erreur");
    }

// Concaténation
    length = 0;
    i = 1;
    int k;
    while(i < size){
        j = 0;
        while(strs[i][j]){
            string[length] = strs[i][j];
            length++;
            j++;
        }
        k = 0;
        if(i != size -1){
            while(sep[k]){ //print le sep si pas le dernier string
                string[length] = sep[k];
                length++;
                k++;
            } 
        }
        i++;
    }
    string[length] = '\0'; 

    return string;


}

int main(int argc, char **argv){
    
    printf("%s\n", ft_strjoin(argc - 1, argv, "--"));
    return (0);
}
