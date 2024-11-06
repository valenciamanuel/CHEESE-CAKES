#include <iostream>
#include <cstdio>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
//Escribir un programa que lea una frase y posteriormente la escriba carácter a carácter utilizando printf.


int main() {
    char frase[100]; // aqui ponemos el valor maximo de caracteres

    // leeemos la frase
    printf("Introduce una frase: ");
    scanf("%99[^\n]", frase); // leemos hasta el salto de linea o 99 letras

    // se imprime la frase caracter tras caracter
    for (int i = 0; frase[i] != '\0'; ++i) {
        printf("%c\n", frase[i]);
    }

    return 0;
}
	
