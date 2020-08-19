from copy import deepcopy
for _ in range(int(input())):
    a = list(input())
    b = list(input())
    for i in b:
        a.remove(i)
    a.sort()
    sp = deepcopy(a)
    sp.append(b[0])
    sp = sorted(sp, reverse=True)
    if b[0] not in a:
        print(''.join(a[0:len(sp) - sp.index(b[0]) -1]) + ''.join(b) +''.join(a[len(sp) - sp.index(b[0]) - 1:]))
    else:
        res = ''.join(a[0:a.index(b[0])]) + ''.join(b) + ''.join(a[a.index(b[0]):])
        print(min(res, ''.join(a[0:len(sp) - sp.index(b[0]) - 1]) + ''.join(b) + ''.join(a[len(sp) - sp.index(b[0]) - 1:])))
