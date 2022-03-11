a=int(input("enter no:"));
b=int(input("enter no:"));
k=10**9;
while(a>=k/2):
    a=a-k-7;
for i in range(1,b+1):
    if(a**i>k+7):
        b=b%i
        break
print(a**b);
