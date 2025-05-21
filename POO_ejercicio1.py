class personaje:

    def __init__(self, nombre, fuerza, inteligencia, defensa, vida):
        self.nombre = nombre
        self.fuerza = fuerza
        self.inteligencia = inteligencia
        self.defensa = defensa
        self.vida = vida
        
    def atributos(self):
        print(self.nombre, ":", sep="")
        print("·fuerza:", self.fuerza)
        print("·inteligencia:", self.inteligencia)
        print("·defensa:", self.defensa)
        print("·vida:", self.vida)
        
    def subir_nivel(self, fuerza, inteligencia, defensa):
        self.fuerza = self.fuerza + fuerza
        self.inteligencia = self.inteligencia + inteligencia
        self.defensa = self.defensa + defensa
        
    def esta_vivo(self):
        return self.vida > 0
    
    def morir(self):
        self.vida = 0
        print(self.nombre, "ha muerto :c")
        
    def daño(self, enemigo):
        return self.fuerza - enemigo.defensa
    
    def ataque(self, enemigo):
        daño = self.daño(enemigo)
        enemigo.vida = enemigo.vida - daño
        print(self.nombre, "ha realizado", daño, "puntos de daño a", enemigo.nombre)
        if enemigo.esta_vivo():
            print("la vida de", enemigo.nombre, "es", enemigo.vida)
        else:
            enemigo.morir()
#========================================= GUERRRERO
class guerrero(personaje):
    def __init__(self, nombre, fuerza, inteligencia, defensa, vida, espada):
        #personaje.__init__(self, nombre, fuerza, inteligencia, defensa, vida)
        super().__init__(nombre, fuerza, inteligencia, defensa, vida)
        self.espada = espada
        
    def cambiar_arma(self):
        opcion = int(input("Eligue un arma: (1) Acero Valyrio, daño 8. (2) Matadragones, daño 10: "))
        if opcion == 1:
            self.espada = 8
        elif opcion == 2:
            self.espada = 10
        else:
            print("opcion incorrecta")
            
    def atributos(self):
        super().atributos()
        print("·espada:", self.espada)
        
    def daño(self, enemigo):
        return self.fuerza*self.espada - enemigo.defensa
#============================================   MAGO
class mago(personaje):
    def __init__(self, nombre, fuerza, inteligencia, defensa, vida, libro):
        super().__init__(nombre, fuerza, inteligencia, defensa, vida)
        self.libro = libro
    
    def atributos(self):
        super().atributos()
        print("·libro", self.libro)
        
    def daño(self, enemigo):
        return self.inteligencia*self.libro - enemigo.defensa
#======================================> COMBATE
"""    def combate(self, jugador_1, jugador_2):
        turno = 0
        while jugador_1.esta_vivo() and jugador_2.esta_vivo():
            print("\nturno", turno)
            print(">>> accion de ", jugador_1.nombre, ":", sep="")
            jugador_1.ataque(jugador_2)
            print(">>> accion de ", jugador_2.nombre, ":", sep="")
            jugador_2.ataque(jugador_1)
            turno += 1
        if jugador_1.esta_vivo():
            print("\nHa ganado",  jugador_1.nombre)
        elif jugador_2.esta_vivo():
            print("\nHa ganado",  jugador_2.nombre)
        else:
            print("\nEmpate")
"""
#==================================> METODOS
#luis = personaje("jorch", 20, 15, 10, 100)#aqui esta el metodo
#mi_enemigo = personaje("colesterol", 8, 5, 3, 5)
#guerrero = guerrero("doom", 20, 15, 10, 100, 5)
#mago = mago("margarita", 20, 15, 10, 100, 5)
jugador_1 = guerrero("doom", 20, 10, 4, 100, 4)
jugador_2 = mago("margarita", 5, 15, 4, 100, 3)
#=========================================> PRINT
def combate(jugador_1, jugador_2):
    turno = 0
    while jugador_1.esta_vivo() and jugador_2.esta_vivo():
        print("\nturno", turno)
        print(">>> accion de ", jugador_1.nombre, ":", sep="")
        jugador_1.ataque(jugador_2)
        print(">>> accion de ", jugador_2.nombre, ":", sep="")
        jugador_2.ataque(jugador_1)
        turno += 1
    if jugador_1.esta_vivo():
        print("\nHa ganado",  jugador_1.nombre)
    elif jugador_2.esta_vivo():
        print("\nHa ganado",  jugador_2.nombre)
    else:
        print("\nEmpate")
        
print(combate(jugador_1, jugador_2))
