a=int(input("enter no:"));
b=int(input("enter no:"));
k=1000000007;
bt=b;
while(bt>=1 and a>=0):
    a=a-k;
    bt=bt-1;
bt=b;
for i in range(1,bt+1):
    if(a**i>k+7):
        bt=bt%i
        break
print((a**bt)%k);
