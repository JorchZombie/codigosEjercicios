
class valores:
    def __init__(self):
        num = input("ingresa un numero binario ")           # AQUI SE INGRESA EL NUMERO
        num = num.zfill(8)          # SOLO RELLNA LOS NUMEROS QUE FALTANTES
        try:
            if len(num) > 8:
                raise ValueError("el numero debe de tener menos de 8 digitos")
            elif not all(x in "01" for x in num):
                print("ingresante algo diferente a 1 y 0")
                return
            #else:
            #    print("todo esta correcto c:")
        except:
            print("solo deben de ser numeros, por eso el champu tiene instrucciones")
            return
    #
    #en el try hay dos condiciones, la primera se encarga de validar que solo se ingresen 8 digitos
    #en la segunda condicion, se encarga de validar que solo haya 0 y 1 nada mas y no incluya otra cosa
    #difente, si detecta que hay algo mas aparte de 0 y 1 marca un error 
    #
        bytes = [128, 64, 32, 16, 8, 4, 2, 1]   # es la lista de los bytes que hay en el lenguaje binario
        resul = 0   #variable donde se guardara el resultado

        for i in range(8):
            if num[i] == "1":
                resul += bytes[i]
        print("el numero decimal es: {}".format(resul))
    #
    #este for es algo mas facil de leer
    #solo cuenta del 0 al 7 y si en la cadena (num) hay un "1"
    #va a sumar el numero que se encuentre en la cadena (bytes)
    #

#================== TERMINA VALORES
valores()
