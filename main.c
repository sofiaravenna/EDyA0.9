//Defina una función que calcule la longitud de una cadena de caracteres.
#include <stdio.h>
void longitud(char *);

int main() {

    char x[1000];
    char *px=&x;
    printf("Ingresar una cadena de caracteres: ");
    fflush(stdin);
    gets(x);
    longitud(&x);
    return 0;
}

void longitud(char *px){
    int cont=0;
    for(int i=0; *px[i] != '\0'; i++) {
        cont = +;
    }
    printf("\nEl texto ingresado tiene %d caracteres.",cont);
}