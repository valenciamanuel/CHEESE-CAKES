
frase1 = input("Introduce la primera frase: ")
frase2 = input("Introduce la segunda frase: ")

letras_repetidas = []
longitud_minima = min(len(frase1), len(frase2))

for i in range(longitud_minima):
    if frase1[i] == frase2[i]:
        letras_repetidas.append(frase1[i])

print("Letras repetidas en la misma posición:", letras_repetidas)
