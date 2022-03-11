'''s=[]
ss=[]
[n,k]=list(map(int,input().strip().split()))[:2]
for j in range(n):
    s.append(int(input()))
def sss(u,v):
    max=0
    for i in range(u):
        ss.append([0])
        for j in range(v):
            ss[i].append(0)
    for i in range(0,u):
        for j in range(i,v):
            ss[i][j]=ss[i][j-1]+s[j]
    for i in range(0,u):
        for j in range(i+k,v):
            t=s[i:j+1]
            p=0
            for i in range(k):
                a=0
                if(t!=[]):
                    a=min(t)
                    t.remove(a)
                p+=a
            ss[i][j]-=p
            if(ss[i][j]>max):
                max=ss[i][j]
    return(max)
'''
def fun(a,n):
    t=max(a[n-1])
    s=0
    s+=t
    for i in range(n-2,-1,-1):
        l=[]
        for j in range(n):
            if(t>a[i][j]):
                l.append(a[i][j])
        if(l==[]):
            print(-1)
            return
        t=max(l)
        s+=t     
    print(s)
    return

n=int(input())
a=[]
for i in range(n):
    a.append(list(map(int,input().strip().split()))[:n])
fun(a,n)





















'''
def row(u):
    for i in range(u):
        print("---",end="--")
def printtable(t,u,v):
    for i in range(u):
        row(u)
        print("")
        for j in range(v):
            print(" | ",end="")
            print(t[i][j],end="")
        print("")

print(sss(n,n))
printtable(ss,n,n)
'''
