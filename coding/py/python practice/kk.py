def func(number):
    if number in range(1,3999):
        p=""
        num = [1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000]
        sym = ["I", "IV", "V", "IX", "X", "XL", "L", "XC", "C", "CD", "D", "CM", "M"]
        i = 12
        while number:
            div = number // num[i]
            number %= num[i]
            while div:
                p=p+sym[i]
                div -= 1
            i -= 1
        rom(p)            
    else:
        print(number)
        
def rom(p):
    b={"I":18,"V":31,"X":33,"L":21,"C":12,"D":13,"M":22}
    max=0
    c=0
    p=list(p)
    d=len(p)-1
    for i in p:
        if(b[i]>max):
            max=b[i]
    for i in p:
        c=c+b[i]*((max+1)**d)
        d-=1
    func(c)    


n=int(input())
func(n)
