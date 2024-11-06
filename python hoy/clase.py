class Persona:
    personas_total = 0 #este es un atributo de clase
    def __init__(self):
        Persona.personas_total += 1

juan = Persona() # se ejecuta el constructor.
print ("personas_total a través de juan: ", juan.personas_total)
pedro = Persona() # se ejecuta nuevamente el constructor.
print ("personas_total a través de pedro: ",
pedro.personas_total)
print ("personas_total a través de juan: ",
juan.personas_total)
luis = Persona()# se ejecuta nuevamente el constructor.
print ("personas_total a través de luis: ",
luis.personas_total)
print ("personas_total a través de juan: ",
juan.personas_total)
print ("personas_total a través de pedro: ",
pedro.personas_total)
Persona.personas_total = 50
print ("juan ->", juan.personas_total)
print ("pedro ->", pedro.personas_total)    