class opera:
    num = int(input("ingresa un numero binario: "))
    try:
        if len(num) > 8:
            raise ValueError("el numero debe de tener menos de 8 digitos")
        elif num != 1 or num != 0:
            raise ValueError("el numero debe de ser binario")
    except:
        print("solo debe de ingresar numeros >:v")
        
        
        
opera()