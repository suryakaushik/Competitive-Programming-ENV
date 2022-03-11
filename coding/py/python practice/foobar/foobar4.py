def s(n):
    if(n in d.keys()):
        return(d[n])
    else:
        for j in range(5,n+1):
            s=[]
            for i in range(1,1+(j//2)):
                if(i==j-i):
                    continue
                s.append(d[j-i])
            d[j]=sum(s)-j
    print(d)

def s1(n):
    c = [1]+[0]* n
    for i in range(1, n+1):
        for j in range(n, i-1, -1):
            c[j]+=c[j-i]
    return(c[n]-1)

n=int(input())
d={1:0,2:0,3:1,4:1}
s(n)
print(s1(n))
