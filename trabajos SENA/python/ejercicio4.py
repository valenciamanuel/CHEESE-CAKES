def calcular_puntaje(correctas, incorrectas, en_blanco):
    puntaje_final = (correctas * 4) + (incorrectas * -1) + (en_blanco * 0)
    return puntaje_final

# Ejemplo de uso
nombre = input("Ingrese el nombre del aspirante: ")
correctas = int(input("Ingrese la cantidad de respuestas correctas: "))
incorrectas = int(input("Ingrese la cantidad de respuestas incorrectas: "))
en_blanco = int(input("Ingrese la cantidad de respuestas en blanco: "))

puntaje_final = calcular_puntaje(correctas, incorrectas, en_blanco)
print(f"El puntaje final de {nombre} es: {puntaje_final}")
