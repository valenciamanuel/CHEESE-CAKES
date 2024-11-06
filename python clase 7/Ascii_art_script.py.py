# Importa el paquete art
from art import *

# Genera arte ASCII a partir de texto
text_art = text2art(":)", font="block")  # Elige un estilo de fuente como 'block'

# Imprime el arte ASCII generado
print(text_art)

# También puedes probar diferentes estilos por diversión
a = art("random")  # Esto genera arte ASCII aleatorio
print(a)
