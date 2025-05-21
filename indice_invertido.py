#documentos =[
#    "Hola mundo me gusta python",
#    "Con la programación puedes hacerlo todo",
#   "COn python puedo crear servicios web",
#    "JorchZombie vuelve a la accion prras"
#]
#
#resultado =[]
#for doc in documentos:
#    if"python" in doc:
#        resultado.append(doc)

#print(resultado)

#eso es algo qeu si funciona pero no es recomendable ya que para
#èn algo que tenga mas palabras que como un millon de palabras
#no es algo muy optiomo que digamos
#asi que esta seria la mejor opcion


documentos = [
    "Hola mundo me gusta python",
    "Con la programación puedes hacerlo todo",
    "Con python puedo crear servicios web",
    "JorchZombie vuelve a la accion prras"
]

index = {} #asi se hace un diccionario
for i, doc in enumerate(documentos):
    for palabra in doc.split():
        if palabra not in index:
            index[palabra] = [i]
        else:
            index[palabra].append(i)

results = index["python"]
for i in results:
    print(documentos[i])
