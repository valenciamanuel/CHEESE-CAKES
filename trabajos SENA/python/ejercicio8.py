def contar_palabras(frase):
    palabras = frase.split()
    return len(palabras)

# Ejemplo de uso
frase = input("Ingrese una frase: ")
numero_de_palabras = contar_palabras(frase)
print(f"El número de palabras en la frase es: {numero_de_palabras}")
