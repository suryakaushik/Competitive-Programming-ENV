def solution(n):
    res = 0
    while n!=1:
        if n%2 == 0:
            n = n//2
        elif n >= 3  and n%2!=0:
            n -= 1
        else:
            n += 1
        res += 1
    return res

n=int(input())
print(solution(n))
