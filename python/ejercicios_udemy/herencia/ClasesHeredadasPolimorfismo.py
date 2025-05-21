class Producto:
    def __init__(self, referencia, nombre, pvp, descripcion):
        self.referencia = referencia
        self.nombre = nombre
        self.pvp = pvp
        self.descripcion = descripcion

    def __str__(self):
        return """\
REFERENCIA\t{}
 OMBRE\t{}
PVP\t\t{}
DESCRIPCION\t{}""".format(self.referencia, self.nombre, self.pvp, self.descripcion)

class adorno(Producto):
    pass

class Alimento(Producto):
    productor = ""
    distribuidor = ""

    def __str__(self):
        return"""\
REFERENCIA\t{}
NOMBRE\t{}
PVP\t\t{}
DESCRIPCION\t{}
PRODUCTOR\t{}
DISTRIBUIDOR\t{}""".format(self.referencia, self.nombre, self.pvp, self.descripcion, self.productor, self.distribuidor)

class libro(Producto):
    isbn = ""
    autor = ""

    def __str__(self):
        return"""\
REFERENCIA\t{}
NOMBRE\t{}
PVP\t\t{}
DESCRIPCION\t{}
ISBN\t{}
AUTOR\t{}""".format(self.referencia, self.nombre, self.pvp, self.descripcion, self.isbn, self.autor)

ad = adorno(2034, "vaso adornado", 15, "vaso de porcelana adornado con árboles")

al = Alimento(2035, "botella de aceite de oliva extra", 5, "250 ML")
al.productor = "la aceitera"
al.distribuidor = "distribuciones SA"

li = libro(2036, "conci mediterránea", 9, "receras sanas y buenas")
li.isbn = "0-123456-78-9"
li.autor = "doña juliana"

productos = [ad, al]        # se guardan los resultado de la clases en esta lista

productos.append(li)

#for p in productos: #aqui se esta imprimiendo la lista
#    print(p, "\n")
"""
for p in productos:
    if(isinstance(p, adorno)):                          # SIRVE PARA SABER SI P (DE EJEMPLO) ES DEL TIPO ADORNO(DE EJEMPLO)
        print(p.referencia, p.nombre)                   # SE INGRESA OTRO ARGUMENTO
    elif(isinstance(p, Alimento)):                      #
        print(p.referencia, p.nombre, p.productor)
    elif(isinstance(p, libro)):
        print(p.referencia, p.isbn)
"""
def rebajaproducto(p, rebaja):
# DEVUELVE UN PRODUCTO CON UNA REBAJA EN PORCENTAJE DE SU PRECIO
    p.pvp = p.pvp - (p.pvp/100 * rebaja)
    return p

alRebajado = rebajaproducto(al, 10)
#print(alRebajado)
print(al)
