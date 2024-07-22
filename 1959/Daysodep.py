fi = open('Daysodep.inp','r'); fo = open('Daysodep.out','w')
n,k = map(int,fi.readline().split())
a = [0] + list(map(int,fi.readline().split()))
b = [0]*(n+1)
c = [0]*(n+1)
d = [0]*(n+1)
e = [0]*(n+1)
res = 0
for i in range(1,n+1):
    if a[i] % 2 == 0:
        b[i] += b[i-1]+1
        c[i] += c[i-1]
        d[i] += d[i-1] + a[i]
        e[i] += e[i-1]
    else:
        b[i] += b[i-1]
        d[i] += d[i-1]
        c[i] += c[i-1]+1
        e[i] += e[i-1] + a[i]
for i in range(1,n+1):
    for j in range(0,i):
        if b[i] - b[j] > 0 and c[i] - c[j] > 0:
            if  0 <= (d[i] - d[j])-(e[i]-e[j])<=k:
                res += 1
fo.write(str(res))
fi.close();fo.close()
