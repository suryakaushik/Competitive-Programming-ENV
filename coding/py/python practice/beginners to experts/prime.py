t=int(input("enter N:"));
l=[];
for i in range(t):
    k=int(input("enter num:"));
    l.append(k);
for p in l:
    c=0;
    if p==2:
        print("Yes");
    if p%2==0:
        print("No");
    m=3;
    while(m*m<=p):
        if p%m==0:
            c=c+1;
        m=m+2;
    if(c==0):
        print("Yes");
    else:
        print("No");
