def fun(x,p):
    i=0;
    while(x>2**i):
        i=i+1;
    k=2**(i-p);
    if(x%k==0):
        return(True);
    else:
        return(False);


N=int(input("enter N:"));
l=[];
for i in range(N):
    #x=int(input("x:"));
    p=list(map(int,input().strip().split()))[:2];
    #p=int(input("p:"));
    l.append(fun(p[0],p[1]));
for i in range(N):
    print(l[i]);
