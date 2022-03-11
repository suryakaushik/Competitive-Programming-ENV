s=[]
ss=[]
[n,k]=list(map(int,input().strip().split()))[:2]
for j in range(n):
    s.append(int(input()))
def fun(t):
    ans=0
    for i in range(k):
        a=0;
        if(t!=[]):
            a=min(t)
            t.remove(a)
        ans+=a
    return(ans)

def sss(u,v):
    max=0
    for i in range(u):
        ss.append([0])
        for j in range(v):
            ss[i].append(0)
    for i in range(0,u):
        for j in range(i+k,v):
            t=s[i:j+1]
            p=fun(t)
            m=0
            for q in range(i,j+1):
                m+=s[q]
            ss[i][j]=m-p
            if(ss[i][j]>max):
                max=ss[i][j]
    return(max)
























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
