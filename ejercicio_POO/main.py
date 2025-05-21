from suma import Suma
from resta import Resta

#se crean los objetos
suma = Suma(10, 5)
resta = Resta (10, 5)

#se usan los metodos heredados
suma.mostrar_resultado(suma.calcular())
resta.mostrar_resultado(resta.calcular())