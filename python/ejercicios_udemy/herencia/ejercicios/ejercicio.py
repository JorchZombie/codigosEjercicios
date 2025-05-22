class vehiculo():
    def __init__(self, color, ruedas):
        self.color = color
        self.ruedas = ruedas

    def __str__(self):
        return "color {}, {} ruedas". format(self.color, self.ruedas)

class coche(vehiculo):
    def __init__(self, color, ruedas, velocidad, cilindrada):
        super().__init__(color, ruedas)     #coche herada de vehiculo
        self.velocidad = velocidad
        self.cilindrada = cilindrada

    def __str__(self):
        return super().__str__() + ", {} Km/h, {} cc".format(self.velocidad, self.cilindrada)

class camioneta(coche):
    def __init__(self, color, ruedas, velocidad, cilindrada, carga):        #camioneta herada a coche
        super().__init__(color, ruedas, velocidad, cilindrada)
        self.carga = carga

    def __str__(self):
        return super().__str__() + ", {} Kg de carga".format(self.carga)

class bicicleta(vehiculo):                      #bicicleta herada a vehiculo
    def __init__(self, color, ruedas, tipo):
        super().__init__(color, ruedas)
        self.tipo = tipo

    def __str__(self):
        return super().__str__() + ", tipo: {}".format(self.tipo)

class motocicleta(bicicleta):               # motocicleta hereda a bicicleta
    def __init__(self, color, ruedas, tipo,velocidad, cilindrada):
        super().__init__(color, ruedas, tipo)
        self.velocidad = velocidad
        self.cilindrada = cilindrada

    def __str__(self):
        return super().__str__() + ", {} Km/h, {} cc".format(self.velocidad, self.cilindrada)


#def catalogar(vehiculos):            # AQUI LO QUE MUESTRA ES UNA LISTA DE HEVICULOS
#    for v in vehiculos:      # Y LOS RECORRE MOSTRANDO SU NOMBRE DE CLASE Y SUS ATRIBUTOS
#        print(type(v).__name__, v)      #

def catalogar(vehiculos, ruedas = None):
    if ruedas != None:         # ESTO MUESTRA EL RECUENTO
        contador = 0
        for r in vehiculos:
            if r.ruedas == ruedas:
                contador += 1
        print("\nSe han encontrado {} vehiculos con {} ruedas".format(contador, ruedas))
       # if r in vehiculos:
        #    return
    
    for r in vehiculos:
        if ruedas == None:
            print(type(r).__name__, r)
        else:
            if r.ruedas == ruedas:
                print(type(r).__name__, r)
lista = [
    coche("azul", 4, 150, 1200),
    camioneta("blanco", 4, 100, 1300, 1500),
    bicicleta("verde", 2, "urbana"),
    motocicleta("negro", 2, "deportiva", 180, 900)
]

catalogar(lista)
catalogar(lista, 0)
catalogar(lista, 2)
catalogar(lista, 4)