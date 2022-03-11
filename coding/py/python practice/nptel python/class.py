class kk:
    def __init__(self,a,b):
        self.a=a
        self.__b=b
        return
    def geta(self):
        return(self.a)
    def getb(self):
        return(self.__b)
    def seta(self,a):
        self.a=a
        return
    def setb(self,b):
        self.__b=b
        return
class k2:
    def main():
        e=kk(1,2)
        print(e.a)
        print(e.__b)
        print(e.geta())
        print(e.getb())
k2.main()
