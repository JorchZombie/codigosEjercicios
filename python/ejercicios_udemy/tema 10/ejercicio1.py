"""
1) Utilizando todo lo que sabes sobre cadenas, listas, sus métodos internos... Transforma este texto:

un día que el viento soplaba con fuerza#mira como se mueve aquella banderola -dijo un monje#lo que se mueve es el viento -respondió otro monje#ni las banderolas ni el viento, lo que se mueve son vuestras mentes -dijo el maestro
En este otro:

Un día que el viento soplaba con fuerza...
- Mira como se mueve aquella banderola -dijo un monje.
- Lo que se mueve es el viento -respondió otro monje.
- Ni las banderolas ni el viento, lo que se mueve son vuestras mentes -dijo el maestro.
"""

texto = "un dia que el viento soplaba con fuerza#mira como se mueve aquella banderola -dijo un monje#lo que se mueve es el biento -respondio otro monje#ni las banderolas ni el viento, lo que se mueve son vuestras mentes -dijo el maestro"

lineas = texto.split("#")
for i, linea in enumerate(lineas):
    lineas[i] = linea.capitalize()
    if i == 0:
        lineas[i] = lineas[i] + "..."
    else:
        lineas[i] = "- " + lineas[i] + "."

for linea in lineas:
    print(linea)
