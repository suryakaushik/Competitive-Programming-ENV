def Bin(n):
    return ''.join(str(1 & int(n) >> i) for i in range(64)[::-1])

s=int(input("enter sum:"));
n=int(input("enter num:"));
c=0;a=[];
for count in range(n):
    p=int(input("enter no:"));
    a.append(p);
for i in range(1,2**n):
    sum=0;
    k=str(Bin(i))
    for j in range(n):
        sum=sum+(int(k[63-j])*a[j])
    if sum==s:
        c=c+1
        print(k)

print(c)
