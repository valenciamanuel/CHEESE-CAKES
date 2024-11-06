#include <iostream>
#include <string>
#include <algorithm>
//desarrollado por manuel valenica
//version 1.0
//18/06/2024
/*
 Un psiquiatra tiene un paciente que habla invirtiendo las frases completas. (por ejemplo: si quiere decir
 “hola caracola”, lo que realmente dice es: “alocarac aloh”). Para poder comunicarse con el paciente
 decide hacer un programa que traduzca lo que él dice al lenguaje del paciente.
 */

std::string invertirFrase(const std::string& fraseInvertida) {
    std::string fraseNormal = fraseInvertida;
    std::reverse(fraseNormal.begin(), fraseNormal.end());
    return fraseNormal;
}

int main() {
    std::string fraseInvertida;
    std::cout << "Ingrese la frase invertida: ";
    std::getline(std::cin, fraseInvertida);

    std::string fraseNormal = invertirFrase(fraseInvertida);
    std::cout << "Frase traducida: " << fraseNormal << std::endl;

    return 0;
}
