t=int(input())
while(t>0):
    t-=1
    c=int(input())
    d=[int(x) for x in input().split()]
    if 0 in d:
        print((len(set(d)))-1)
    else:
        print(len(set(d)))
