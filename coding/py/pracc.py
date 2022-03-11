"""from math import sqrt

i=1
l=[]
if(n>0);
    n=int(input())
    i = 1
    while (i * i < n):
        if (n % i == 0):
            l.append(i)
        i += 1
    for i in range(int(sqrt(n)), 0, -1):
        if (n % i == 0):
            l.append(n//i)
    print(*l)
else:
    print("wrong input")
    """


n=int(input())
l=[]
while True:
    try:
        t=input()
        l.append(t)
    except:
        break
if(len(l)>n):
    print("")
else:
    l=list(set(l))
    print(sum(l))

