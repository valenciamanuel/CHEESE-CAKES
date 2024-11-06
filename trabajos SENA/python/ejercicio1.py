def calcular_indice_cosecha(cantidad_recolectada, cantidad_producida):
    if cantidad_producida == 0:
        return "La cantidad producida no puede ser cero."
    indice_cosecha = (cantidad_recolectada / cantidad_producida) * 100
    return indice_cosecha

# Ejemplo de uso
cantidad_recolectada = float(input("Ingrese la cantidad de frutos recolectados: "))
cantidad_producida = float(input("Ingrese la cantidad de frutos producidos en total: "))

indice_cosecha = calcular_indice_cosecha(cantidad_recolectada, cantidad_producida)
print(f"El índice de cosecha es: {indice_cosecha:.2f}%")
