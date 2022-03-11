def fun(x,p):
    i=p;ans=0;
    while(i<(x+p)):
        ans=ans+(2**i);
        i=i+1;
    return(ans);



N=int(input("enter N:"));
l=[];
for i in range(N):
    p=list(map(int,input().strip().split()))[:2];
    l.append(fun(p[0],p[1]));
for i in range(N):
    print(l[i]);
