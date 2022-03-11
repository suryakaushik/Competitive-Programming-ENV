n,q=map(int,input().split())
ht=list(map(int,input().split()))
a=list(map(int,input().split()))
j,h=1,[]
for i in ht:
    h.append([i,j]);j+=1
for _ in range(q):
    t=list(map(int,input().split()))
    if(t[0]==1):
        a[t[1]]=t[2]
    else:
        if(t[1]<t[2]):
            l=h[t[1]-1:t[2]]
        elif(t[1]==t[2]):
            print(0)
            continue
        else:
            l=h[t[2]-1:t[1]]
        l.sort();print(l);ans=[]
        if(l[-1][1]!=t[1]):
            print(-1)
            continue
        else:
            p=-5
            while(p+1==t[2] or p-1==t[2]):
                
                
