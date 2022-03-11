"""def fun(n):
    c=0
    while(n%2==0):
	    c+=1
	    n=n//2
    return(c)

n,k=map(int,input().split())
x=4
an=fun(n)
if an>=k:
    print(0)
else:
    t=1+((k-an)//4)
    print(t)
###
n,k,j=map(int,input().split())
l=list(map(int,input().split()))
k=k-1;s=l[j-1];l[j-1]=-1
l.sort()
print(s+sum(l[1:k+1]))
###
s=input();n=len(s)
ans=0
for i in range(n):
    for j in range(i+1,n):
        if s[i]==s[j]:
            ans+=j-i
print(ans)


s=input();n=len(s)
d={}
for i in range(n):
    if s[i] in d.keys():
    	d[s[i]]+=[i]
    else:
    	d[s[i]]=[i]
s=0
for p in d.keys():
    l=d[p];n=len(l)
    for i in range(n):
        for j in range(i+1,n):
            s+=abs(l[i]-l[j])
print(s)"""

from math import factorial as fun

for _ in range(int(input())):
    n,k=map(int,input().split())
    if k==n:
        t=fun(n)
        print(t*t)
    elif k==0:
        print(2*fun(n))
    else:
        t1=fun(n)
        t2=fun(n-k);t3=fun(k)
        p=(t1**2)//(t2*t3)
        print(p)
