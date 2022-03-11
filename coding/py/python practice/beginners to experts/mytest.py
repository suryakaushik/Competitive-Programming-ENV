def fun(a,b,m):
    if(b==1):
        return(a%m)
    if(b==2):
        return((a**2)%m)
    if(b%2==0):
        return((fun(a,b//2,m)**2)%m)
    else:
        return((fun(a,b//2,m)*fun(a,(b//2)+1,m))%m)
    


m=(10**9)+7
a=int(input("enter a:"));
if(a>a%m):
    a=a%m
b=int(input("enter b:"));
k=fun(a,b,m)
print(k)
