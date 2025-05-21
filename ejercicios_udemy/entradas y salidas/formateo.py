"""
 "Hola Mundo" → Alineado a la derecha en 20 caracteres
 "Hola Mundo" → Truncamiento en el cuarto carácter (índice 3)
 "Hola Mundo" → Alineamiento al centro en 20 caracteres con truncamiento en el segundo carácter (índice 1)
 150 → Formateo a 5 números enteros rellenados con ceros
 7887 → Formateo a 7 números enteros rellenados con espacios
 20.02 → Formateo a 3 números enteros y 3 números decimales
"""

print("{:>20}".format("hola mundo"))
print("{:.3}".format("hola mundo"))
print("{:^20.1}".format("hola mundo"))
print("{:05d}".format(150)) #d = digito
print("{:7d}".format(7887))
print("{:07.3f}".format(20.02)) #f = flotante
