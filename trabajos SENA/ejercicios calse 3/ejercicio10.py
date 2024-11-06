n = int(input("¿Cuántas palabras deseas ingresar en la lista? "))

lista_palabras = []

for i in range(n):
    palabra = input(f"Ingrese la palabra {i + 1}: ")
    lista_palabras.append(palabra)

print("Lista de palabras:", lista_palabras)
