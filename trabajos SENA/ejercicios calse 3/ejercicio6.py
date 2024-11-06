numeros_ganadores = []

print("Introduce los números ganadores de la lotería de Risaralda. Escribe 'fin' para terminar:")

while True:
    numero = input("Número ganador: ")
    if numero.lower() == 'fin':
        break
    numeros_ganadores.append(int(numero))

numeros_ganadores.sort()

print("Números ganadores ordenados de menor a mayor:", numeros_ganadores)
