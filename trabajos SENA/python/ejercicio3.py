def calcular_distancia(velocidad, tiempo):
    distancia = velocidad * tiempo
    return distancia

# Ejemplo de uso
velocidad = float(input("Ingrese la velocidad constante del automóvil en m/s: "))
tiempo = float(input("Ingrese el tiempo transcurrido en segundos: "))

distancia = calcular_distancia(velocidad, tiempo)
print(f"La distancia recorrida por el automóvil es: {distancia:.2f} metros")
