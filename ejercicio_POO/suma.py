from operacion import Operacion #se importa la clase padre

class Suma(Operacion):
    def calcular(self):
        return self.num1 + self.num2