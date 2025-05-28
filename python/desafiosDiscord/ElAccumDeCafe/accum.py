def accum():#CadenaInicial):# al quitar el argumento, se le pide al usuario que ingrese la cadena que quiera
    while True: #esto es un tipo de do - while, y se repite hasta que se cumpla la condicion
        CadenaInicial = input("escribe unas letras: ")  
        if CadenaInicial.isalpha():     # lo que hace isalpha() es que verifica que solo haya letras en la cadena
            break       
        print("solo debe contener letras, no entiendes o que vergas")
        
    CadenaFinal = []    # aqui se guarda la cadena final y es la que se va a imprimir
    for i in range(len(CadenaInicial)):
        if i == 0:
            CadenaFinal.append(CadenaInicial[i].upper())    #la funcion que hace es solo convertir la primera letra en mayuscula
        else:
            CadenaFinal.append((CadenaInicial[i].upper() + CadenaInicial[i].lower() * i))
            """
                lo que hace esta funciion de arriba ↑ hace que la primera letra sea mayuscula y  las demas sean minusculas
                no importa si la letra que se ingresa a la cadena es mayuscula o minuscula, siempre se convrtira primero en mayuscula y luego en minuscula
                despeues se multiplica por el numero de veces que se repite la letra en la cadena
                por ejemplo si la cadena es "abcd" la salida sera "A-bB-Ccc-Dddd"
            """
    print("-".join(CadenaFinal)) # esta funcion lo que hace es unir los elementos y en cada espacio ingresa un guion

#accum("abcd")
accum() #aqui se llama la funcion y se ejecurta el codigo de arriba ↑