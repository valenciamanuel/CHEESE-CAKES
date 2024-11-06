n = int(input("¿Cuántos elementos deseas ingresar en la lista? "))

lista = []


for i in range(n):
    elemento = input(f"Ingrese el elemento {i + 1}: ")
    lista.append(elemento)

print("Lista original:", lista)

print("Lista invertida:", lista[::-1])
