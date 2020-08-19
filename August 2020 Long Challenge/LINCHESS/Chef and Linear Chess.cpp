tc=int(input())
for i in range(tc):
    ni,ki=map(int,input().split())
    arr=list(map(int,input().split()))
    res=[]
    for i in arr:
        if ki%i==0:
            res.append(i)
    res.sort(reverse=True)
    if len(res)==0:
        print(-1)
        continue
    else:
        print(res[0])
