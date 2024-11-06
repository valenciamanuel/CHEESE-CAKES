def calcular_calificacion_final(parcial1, parcial2, parcial3, examen_final, trabajo_final):
    promedio_parciales = (parcial1 + parcial2 + parcial3) / 3
    calificacion_final = (promedio_parciales * 0.55) + (examen_final * 0.30) + (trabajo_final * 0.15)
    return calificacion_final

# Ejemplo de uso
parcial1 = float(input("Ingrese la calificación del primer parcial: "))
parcial2 = float(input("Ingrese la calificación del segundo parcial: "))
parcial3 = float(input("Ingrese la calificación del tercer parcial: "))
examen_final = float(input("Ingrese la calificación del examen final: "))
trabajo_final = float(input("Ingrese la calificación del trabajo final: "))

calificacion_final = calcular_calificacion_final(parcial1, parcial2, parcial3, examen_final, trabajo_final)
print(f"La calificación final es: {calificacion_final:.2f}")
