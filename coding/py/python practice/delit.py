for _ in range(int(input())):
    n=int(input())
    l1=list(map(int,input().split()))
    l2=list(map(int,input().split()))
    x,y={},{}
    for i in range(n):
        if l1[i] not in x:
            x[l1[i]]=1
        else:
            x[l1[i]]+=1
        if l2[i] not in y:
            y[l2[i]]=1
        else:
            y[l2[i]]+=1
    res=0;flag=0
    if(x==y):
        print(0)
    else:
        for i in x.keys():
            if i in y.keys():
                t=x[i]+y[i]
                if(x[i]!=y[i]):
                    m=(y[i]-x[i])//2
                    if(m<0):
                        m*=-1
                    res+=m
            else:
                t=x[i]
                res+=t//2
            if t%2!=0:
                print(-1);flag=-1
                break
        if flag!=-1:
            for i in y.keys():
                if i not in x.keys():
                    t=y[i]
                    res+=t//2
                        
                if t%2!=0:
                    print(-1);flag=-1
                    break
        if(flag!=-1):
            if(res%2==0):
                print(res//2)
            else:
                print(res//2+1)
        
    

'''
    
    for i in range(n):
        if l1[i] not in x:
            x[l1[i]]=[l2[i]]
        else:
            x[l1[i]].append(l2[i])
        if l2[i] not in y:
            y[l2[i]]=[l1[i]]
        else:
            y[l2[i]].append(l1[i])
    print(x,y)'''
