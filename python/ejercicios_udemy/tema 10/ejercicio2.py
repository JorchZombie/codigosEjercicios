"""# Completa el ejercicio aquí
lista = [29, -5, -12, 17, 5, 24, 5, 12, 23, 16, 12, 5, -12, 17]

def modificar(lis):
    lis = list(set(lis)) #estamos pasando de una lista a un conjunto
    lis.sort(reverse = True) #ordena la lista de mayor a menor
    for i,n in enumerate(lis):
        if n%2 != 0:
            del(lis[i]) # aqui esta el error

    suma = sum(lis)
    lis.insert(0, suma)
    return lis

nueva_lista = modificar(lista)

print(nueva_lista)
print(lista)
    esta codigo es una alternativa pero hay un error en la parte 
    donde esta el ciclo for ya que al eliminar el elemento de la lista
    se cambia todo y hay elementos que no se eliminan ya que cambia
    su ubiacion

"""

lista = [29, -5, -12, 17, 5, 24, 5, 12, 23, 16, 12, 5, -12, 17]

def modificar(lis):
    lis = list(set(lis))
    lis.sort(reverse = True)
    
    l_tem = []
    for n in lis:
        if n%2 == 0:
            l_tem.append(n)
            
    suma = sum(l_tem)
    lis.insert(0, suma)
    return lis

nueva_lista = modificar(lista)
print("lista modificada: ", nueva_lista)
print("lista original: ", lista)