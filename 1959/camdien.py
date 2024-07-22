fi = open('camdien.inp','r'); fo = open('camdien.out','w')
n,m = map(int,fi.readline().split())
a = list(map(int,fi.readline().split()))
a.sort()
a.reverse()
a = [0] + a
res = -1
nas = 0
if n == 1:
    fo.write('0')
else:
    for i in range(1,n+1):
        nas += a[i]
        res += 1
        if i == n and nas <m:
            res = -1
        if nas >= m:
            break
        else:
            nas -= 1
    if res == -1:
        fo.write(str(res))
    else:
        fo.write(str(res+1))
fi.close();fo.close()
