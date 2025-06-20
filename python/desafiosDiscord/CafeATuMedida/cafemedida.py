"""
def cafe(nombre, gen):
    def __init__(self):
        self.nombre = nombre
        self.gen = gen
"""        
def cafe():
    print("Hola bienvendo a Cafe a tu Medida\n")
    print("vamos a tomar tu orden c: :\n")
    nombre = input("¿como te llamas?\n")
    gen = input("¿Cual es tu genero? (M si eres pibe, F si eres una piba): ")
    
    gen = gen.lower()
    if gen == "m":
        print(f"Bienveido, {nombre}")
    elif gen == "f":
        print(f"Bienveida, {nombre}")
    else:
        print(f"aqui no se aceptan geis, {nombre}, asi que vete antes de que llamemos a la policia pinchi raro")
        

cafe()