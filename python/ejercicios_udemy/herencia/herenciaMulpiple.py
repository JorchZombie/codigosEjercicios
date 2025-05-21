#HERENCIA MULTIPLE

class A:
    def __inti__(self):
        print("soy de clase A")

    def a(self):
        print("este metodo lo heredo de A")
class B:
    def __init__(self):
        print("soy de clase b")

    def b(self):
        print("este metodo lo heredo de b")

class C(A,B):
    def c(self):
        print("este metodo es de C")

c = C()

c.a()  
c.b()
c.c()
