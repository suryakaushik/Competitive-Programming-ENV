'''l=[];s=0
inp=list(map(int,input().strip().split()))[:]
c=len(inp)
for i in inp:
    c-=1
    s+=i*(10**c)
s+=1
for i in range(len(inp)):
    l.append(s%10)
    s=s//10
l.reverse()
print(l)
'''
l=list(map(int,input().strip().split()))[:]
c=len(l)
for i in range(c-1,-1,-1):
    if(l[i]<9):
        l[i]+=1
        break
    else:
        l[i]=0
print(l)
