def calcular_puntaje_total(ganados, empatados, perdidos):
    puntaje_total = (ganados * 3) + (empatados * 1) + (perdidos * 0)
    return puntaje_total

# Ejemplo de uso
nombre_equipo = input("Ingrese el nombre del equipo: ")
ganados = int(input("Ingrese la cantidad de partidos ganados: "))
empatados = int(input("Ingrese la cantidad de partidos empatados: "))
perdidos = int(input("Ingrese la cantidad de partidos perdidos: "))

# Verificación de que el número total de partidos es 20
total_partidos = ganados + empatados + perdidos
if total_partidos != 20:
    print("El número total de partidos debe ser 20.")
else:
    puntaje_total = calcular_puntaje_total(ganados, empatados, perdidos)
    print(f"El puntaje total del equipo {nombre_equipo} es: {puntaje_total}")
