
frase = input("Introduce una frase: ")
frase_sin_espacios = frase.replace(" ", "")


tupla_frase = tuple(frase_sin_espacios)
print("Contenido de la tupla:", tupla_frase)
