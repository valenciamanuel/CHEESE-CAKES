import random

def tirar_dados(): 
    dado1 = random.randint(1, 6)
    dado2 = random.randint(1, 6)
     
    print(f"Has tirado un {dado1} y un {dado2}")
    
    if dado1 + dado2 == 9:
        print("¡Ganaste!")
    else:
        print("Perdió, siga intentándolo")

tirar_dados()
