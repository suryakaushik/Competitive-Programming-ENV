t=1000000007
for _ in range(int(input())):
    n,m=map(int,input().split())
    d={};l=[]
    for i in range(n):
        t=list(map(int,input().split()))
        l.append(t)
        for j in t:
            if j in d.keys():
                d[j]+=1
            else:
                d[j]=1
    if(len(d.keys())==1):
        for i in range(n):
            print(*l[i])
    else:
        print(-1)
