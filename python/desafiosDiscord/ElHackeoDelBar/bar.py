import os

OldFile = os.path.join(os.path.dirname(__file__), "registros_perdidos.txt")
NewFile = os.path.join(os.path.dirname(__file__), "registros_nuevos.txt")

try:
    with open(OldFile, "r", encoding="utf-8") as archold:
        Fileout = archold.read()
        #print(contenido)

except FileNotFoundError:
    print("no se encontro archivo")

with open(NewFile, "w", encoding="utf-8") as archnew:
    for linea in Fileout:
        linea = linea.strip()
        if not linea:
            continue
        partes = linea.split(",")
        if len(partes) != 3:
            continue

        hexValor = partes[0]
        binValor = partes[1].split("/")
        texto = partes[2]

        decihex = str(int(hexValor, 16))
        deci = [str(int(b, 2)) for b in binValor]
        deci_str = " ".join(deci)

        archivo_nuevo = f"{decihex}, {deci_str}, {texto} \n"
        print("se acaba de agreagar: ", archivo_nuevo)
        archnew.write(archivo_nuevo)
