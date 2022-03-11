
def isprime1(p):
    c=0;
    if p==2:
        return(1);
    if p%2==0:
        return(0);
    m=3;
    while(m*m<=p):
        if p%m==0:
            c=c+1;
        m=m+2;
    if(c==0):
        return(1);
    else:
        return(0);

def isprime(p):
    o=[];
    s=[True]*(p+1)
    for k in range(2,p+1):
        if(s[k]):
            o.append(k)
            for i in range(k,p+1,k):
                s[i]=False
    return o

pl=isprime(100000000)
t=int(input("enter N:"));
for i in range(t):
    k=int(input("enter num:"));
    if(k in pl):
        print("Yes");
    else:
        print("No");
