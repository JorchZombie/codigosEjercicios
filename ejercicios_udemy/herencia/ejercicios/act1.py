class vehiculo():
    def __init__(self, color, ruedas):
        self.color = color
        self.ruedas = ruedas

    def __str__(self):
        return "color {}, {} ruedas". format(self.color, self.ruedas)

class coche(vehiculo):
    def __init__(self, color, ruedas, velocidad, cilindrada):
        super().__init__(color, ruedas)
        self.velocidad = velocidad
        self.cilindrada = cilindrada

    def __str__(self):
        return super().__srt__() + ", {} Km/h, {} cc".format(self.velocidad, self.cilindrada)

class camioneta():
    pass

class bicicleta():
    pass

class motocicleta():
    pass

def catalogar():
    pass

def catalogar():
    pass
