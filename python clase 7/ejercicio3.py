def jugar():
    numero_secreto = generar_numero()
    intentos = 0
    
    while True:
        intentos += 1
        intento = obtener_intento()
        
        if intento == numero_secreto:
            print(f"¡Ganaste! El número secreto era {numero_secreto}.")
            print(f"Lo lograste en {intentos} intentos.")
            break
        elif intento < numero_secreto:
            print("El número secreto es mayor. Sigue intentando.")
        else:
            print("El número secreto es menor. Sigue intentando.")

def generar_numero():

    pass

def obtener_intento():
    while True:
        try:
            intento = int(input("Ingrese un número del 1 al 100: "))
            if 1 <= intento <= 100:
                return intento
            else:
                print("Por favor, ingrese un número entre 1 y 100.")
        except ValueError:
            print("Por favor, ingrese un número válido.")
