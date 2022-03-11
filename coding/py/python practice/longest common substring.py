def fun(s1,s2):
    s='';ss='';n=0
    if(len(s1)>=len(s2)):
        n=len(s1)
        s=s1
        ss=s2
    else:
        n=len(s2)
        s=s2
        ss=s1
    for k in range(n+1,0,-1):
        for i in range(0,n-k+1,1):
            if(s[i:i+k] in ss):
                print(s[i:i+k])
                return

s1=input()
s2=input()
fun(s1,s2)

'''
s=input()
n=len(s)
for k in range(n+1,0,-1):
    for i in range(0,n-k+1,1):
        print(s[i:i+k])
'''
