def find_all_paths(graph, start, end, path=[]):
    path = path + [start]
    if start == end:
        return [path]
    paths = []
    for node in graph[start]:
        if node not in path:
            paths =paths+ find_all_paths(graph, node, end, path)
    return paths

t = int(input())
for t_itr in range(t):
    first_multiple_input = input().split()
    n = int(first_multiple_input[0])
    m = int(first_multiple_input[1])
    d = {}
    for _ in range(m):
        i=input().split();
        if(i[0] in d.keys()):
            d[i[0]].append(i[1])
        else:
            d[i[0]]=[i[1]]
        if(i[1] in d.keys()):
            d[i[1]].append(i[0])
        else:
            d[i[1]]=[i[0]]
    k=find_all_paths(d,'1','2');p=[]
    for i in k:
        p=p+i
    r=set(d[1])-set(p)
    if(r==set()):
        print(-1)
    else:
        for i in r:
            print(i,end=' ')
