
numeros = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
numeros_invertidos = numeros[::-1]

for i in range(len(numeros_invertidos)):
    if i < len(numeros_invertidos) - 1:
        print(numeros_invertidos[i], end=", ")
    else:
        print(numeros_invertidos[i])