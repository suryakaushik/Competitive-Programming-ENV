l=input().split()
s=[]
for i in l:
  a=[];n=0;sum=0;
  for j in i:
    a.append(j)
    n+=1
  t=max(a)
  if(t.isdigit()):
    b=int(t)+1
  else:
    b=ord(t)-55
  for j in range(n):
    t=i[j]
    if(t.isdigit()):
      k=int(t)
    else:
      k=ord(t)-55
    sum+=k*(b**(n-j-1))
  s.append(sum)
print(min(s))
