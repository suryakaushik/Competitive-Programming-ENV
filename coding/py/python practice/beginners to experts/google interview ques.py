def sort(A,l,r):
    if r-l<=1:
        return();
    yellow=l+1;
    for green in range(l+1,r):
        if(A[green]<=A[l]):
            (A[yellow],A[green])=(A[green],A[yellow]);
            yellow=yellow+1;

    (A[l],A[yellow-1])=(A[yellow-1],A[l]);
    sort(A,l,yellow-1);
    sort(A,yellow,r);


n=int(input("enter no:"));
a=[];
for i in range(n):
    p=int(input("enter no:"));
    a.append(p);
sort(a,0,len(a));
for j in range(0,n):
    if (a[j]!=a[j-1] and a[j]!=a[j+1] and j!=0 and j!=n-1):
        print(a[j]);
    if (j==0 and a[j]!=a[j+1]):
        print(a[j]);
    if (j==n-1 and a[j]!=a[j-1]):
        print(a[j]);
