"""
En la Mafia del Café, el barista se dio cuenta de que algunos ingredientes en sus mezclas
estaban etiquetados de manera confusa.
Para evitar confusiones en el futuro, decidió que los códigos
de caracteres de las vocales minúsculas (a, e, i, o, u)deben ser convertidos a sus respectivas letras
en la matriz de producción. Tu misión es ayudar al barista en esta transformación.

Dada una matriz de números, verifica si alguno de los números corresponde
a los códigos de caracteres ASCII para las vocales minúsculas:
97 para 'a'
101 para 'e'
105 para 'i'
111 para 'o'
117 para 'u'

Si el número corresponde a una vocal, cámbialo por la letra correspondiente.
Si no, mantén el número tal como está.
la matriz resultante. Por ejemplo, para la entrada
[[97, 98, 99], [100, 101, 102]], la salida debe ser [['a', 98, 99], [100, 'e', 102]]


matriz = [# empieza la matriz
    [65,87,12,567,56],
    [101,114,103,105,111],
    [117,108,100,97,110],
    [102,111,114,105,103]] #termina la matriz

# Códigos ASCII de las vocales minúsculas
vocales_ascii = [97, 101, 105, 111, 117]

# Variable para saber si se encontró alguna vocal
encontrado = False

# Recorrer la matriz
for fila in matriz:
    for elemento in fila:
        if elemento in vocales_ascii:
            print(f"Se encontró el número {elemento}, que corresponde a la vocal '{chr(elemento)}'.")
            encontrado = True

# Mensaje final
if not encontrado:
    print("No se encontraron números que correspondan a vocales minúsculas en la matriz.")

esto es un codigo de chargpt, ahora lo voy hacer a mi manera para ir desarrollando la logica de programacion
    
"""