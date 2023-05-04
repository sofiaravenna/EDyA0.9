//Defina una función que calcule la longitud de una cadena de caracteres.
#include <stdio.h>
#include <stdlib.h>
#include "helper.h"


int main() {

    char texto[1000];
    int resultado;
    printf("Ingresar texto: ");
    fflush(stdin);
    gets(texto);
    resultado= stringLength(texto);
    printf("'%s' tiene %d caracteres",texto,resultado);
    return 0;
}


