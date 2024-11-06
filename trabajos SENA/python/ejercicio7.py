def transformar_frase(frase):
    frase_mayusculas = frase.upper()
    frase_invertida = frase_mayusculas[::-1]
    return frase_invertida

# Ejemplo de uso
frase = input("Ingrese una frase: ")
frase_transformada = transformar_frase(frase)
print(f"La frase transformada es: {frase_transformada}")
