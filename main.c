//Defina una función que calcule la longitud de una cadena de caracteres.
#include <stdio.h>
#include <stdlib.h>

int stringLength(char *);

int main() {

    char texto[]="gold dust woman";
    int resultado;
    resultado= stringLength(texto);
    printf("'%s' tiene %d caracteres",texto,resultado);
    return 0;
}

int stringLength(char *string){
    int longitud=0;
    int i=0;
    while(string[i]!='\0'){
        longitud++;
        i++;
    }
    return longitud;
}