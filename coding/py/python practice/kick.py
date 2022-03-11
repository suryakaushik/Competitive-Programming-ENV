for x in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    t=list(range(k,0))
    y=0
    for i in range(0,n):
        if(t==a[i:i+k]):
            y+=1
    print("Case #",end="")
    print(x+1,end="")
    print(": ",end="")
    print(y)
