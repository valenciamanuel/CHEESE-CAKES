asignaturas = []
print("Introduce las asignaturas del curso. Escribe 'fin' para terminar:")

while True:
    asignatura = input("Asignatura: ")
    if asignatura.lower() == 'fin':
        break
    asignaturas.append(asignatura)

for asignatura in asignaturas:
    print(f"Yo estudio {asignatura}")
