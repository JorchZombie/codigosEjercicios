"""
> debe tomar 1 argumento que sera un numeor entero positivo
> en caso de no recibir un argumento, debe mostrar informacion acerca de como utilizar el scrip

** el objetivo del script es descomponer el numero en unidades, decenas y centenas, milles
tal que por ejemplo si se introduce el numero **
> 3647

** el programa debera devolver una descomposicion lina a linea
como la siguiente utilizando las tecnicas de formateo **
> 0007
  0040
  0600
  300
  
pista: que el valor sea un numero no significa necesariamente que deba serlo para formatearlo
Nevesitaras jugar muy bien con los indices y realizar muchas conversiones entre tipos de cadenas,
numeros y viceversa
"""

import sys

if len(sys.argv) == 2:
    numero = int(sys.argv[1])
    if numero < 0 or numero > 9999:
        print("numero incorrecto")
    else:
        cadena = str (numero)
        longitud = len(cadena)
        
        for i in range(longitud):
            print("{:04d}".format(int (cadena[longitud-1-i]) * 10 ** i))
            
else:
    print("error - argumentos incorrectos")
