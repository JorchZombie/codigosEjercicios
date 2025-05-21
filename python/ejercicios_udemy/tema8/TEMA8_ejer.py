import math     #librerias

class punto:                            # aqui se crearon la clase y se asignaron las variables
    def __init__(self, x=0, y=0):       # constructor
        self.x = x
        self.y = y
    
    def __str__(self):                          #aqui se hicieron strings las variables para que se pudieran imprimir
        return "({},{})".format(self.x, self.y)

    def cuadrante(self):
        if self.x > 0 and self.y > 0:                                   # se crearon los cuadrantes del plano carteciano
            print(("{} -> pertenece al primer cuadrante").format(self))        
        elif self.x < 0 and self.y > 0:                                 
            print(("{} -> pertenece al segundo cuadrante").format(self))
        elif self.x < 0 and self.y < 0:
            print(("{} -> pertenece al tercer cuadrante").format(self))
        elif self.x > 0 and self.y < 0:
            print(("{} -> pertenece al cuarto cuadrante").format(self))
        else:                                                           # si no se cumple alguna condicion eso indica que 
            print(("{} -> se encuentra en el origen").format(self))     # se encuntra en el punto de origen (en el centro)
            
    def vector(self, p):            #este metodo calcula el vector de un punto a otro
        print("el vector entre {} y {} es -> ({},{})".format(self, p, p.x - self.x, p.y - self.y))
        
    def distancia(self, p):         #este metodo calcula la distancia que hay de un punto a otro ;v
        dista =  math.sqrt((p.x - self.x)**2 + (p.y - self.y)**2)
        print("la distancia entre los puntos {} y {} es -> {}".format(self, p, dista))
            

class rectangulo:
    def __init__(self, Pinicial = punto(), Pfinal = punto()):
        self.Pinicial = Pinicial
        self.Pfinal = Pfinal            #constructor
        
    @property
    def base(self):
        #self.base = abs(self.Pfinal.x - self.Pinicial.x)
        valor1 = abs(self.Pfinal.x - self.Pinicial.x)
        print("la base del rectangulo es {}".format(valor1))
        return valor1
    
    @property
    def altura(self):
        #self.altura = abs(self.Pfinal.y - self.Pinicial.y)
        valor2 = abs(self.Pfinal.y - self.Pinicial.y)
        print("la altura del rectangulo es {}".format(valor2))
        return valor2
     
    @property
    def area(self):
        #self.base = abs(self.Pfinal.x - self.Pinical.x)
        #self.altura = abs(self.Pfinal.y - self.Pinicial.y)
        #self.area = self.base * self.altura
        valor3 = abs(self.base * self.altura)
        print("El area del rectangulo es {}".format(valor3))
        #return valor3
        
A = punto(2,3)
B = punto(5,5)
C = punto(-3,-1)
D = punto(0,0)

#A.cuadrante()
#B.cuadrante()
#C.cuadrante()
#D.cuadrante()

#A.vector(B)
#B.vector(A)

#A.distancia(B)
#B.distancia(A)

#A.distancia(D)
#B.distancia(D)
#C.distancia(D)

R = rectangulo(A,B)
R.base
R.altura
R.area




