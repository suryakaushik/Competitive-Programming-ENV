
            

def isSubsetSum(set,n, sum) : 
 
    if (sum == 0) : 
        return True
    if (n == 0 and sum != 0) : 
        return False
    if (set[n - 1] > sum) : 
        return isSubsetSum(set, n - 1, sum);
    #return isSubsetSum(set, n-1, sum);
    return isSubsetSum(set, n-1, sum-set[n-1]) 
      
      

n=10;sum=17;set=[-7,-1,2,3,4,4,5,8,9,16];
#n=int(input("enter no:"));
#sum=int(input("enter sum:"));
#a=[];
#for i in range(n):
    #p=int(input("enter a:"));
    #a.append(p);
sum = 9;c=0;
n = len(set) 
if (isSubsetSum(set, n, sum) == True) : 
    c=c+1; 
print(c);
