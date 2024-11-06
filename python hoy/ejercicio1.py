class Persona:
    def __init__(self, nombre, edad):
        self._nombre = nombre
        self._edad = edad


    @property
    def nombre(self):
        return self._nombre


    @nombre.setter
    def nombre(self, nuevo_nombre):
        self._nombre = nuevo_nombre


    @property
    def edad(self):
        return self._edad

    @edad.setter
    def edad(self, nueva_edad):
        self._edad = nueva_edad

per = Persona("Juan Camilo", 21)


per.nombre = "Cristina"

per.edad = 40


print(f"Nombre: {per.nombre}, Edad: {per.edad}")

