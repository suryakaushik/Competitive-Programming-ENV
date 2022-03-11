'''
for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    y=a[0];i=0;
    while(1):
        if(i>n-1):
            i=i%n
        if(a[i]==0):
            continue
        if(x>=a[i] and a[i]!=0):
            a[i]=0
        i+=1;x=x*2
        if(a==[0]*n):
            print(i)
            break
'''


for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    a.sort();res=0
    if(x>=a[-1]):
        print(n)
    else:
        for i in a:
            j=0
            if(x>=i):
                res+=1
            else:
                while(x<i):
                    x=x*2
                    j+=1
                res+=j
        print(res+1)
