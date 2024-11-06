#include <stdio.h>
#include <string.h>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
// Sustituir todos los espacios en blanco de una frase por un asterisco.


int main() {
    char frase[] = "la comida llena mucho .";
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            frase[i] = '*';
        }
    }
    printf("%s", frase);
    return 0;
}
