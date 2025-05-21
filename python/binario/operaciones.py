class valores:
    def __init__(self, bin, num):
        self.num = num
        self.bin = bin = []
        print("si te sale este mensaje todo esta bien")
        
    def AgregarNumero(self):
        bin = []
        for n in 8:
            n = input("ingresa un valor que solo sean 1 y 0")
            bin = [n]
        for c in bin:
            print(bin[c])
            
b = valores
b.AgregarNumero        