def solution(x, y):
    if(x<=1 and y<=1):
        return(1)
    sx=0
    for i in range(1,x+1):
        sx+=i
    sy=sx
    for i in range(x,x+y-1):
        sy+=i
    return(str(sy))

x=int(input())
y=int(input())
k=solution(x,y)
