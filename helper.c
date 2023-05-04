#include "helper.h"

int stringLength(char *string){
    int longitud=0;
    int i=0;
    while(string[i]!='\0'){
        longitud++;
        i++;
    }
    return longitud;
}