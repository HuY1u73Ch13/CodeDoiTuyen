fi = open('PSEQ.inp','r'); fo = open('PSEQ.out','w')
n,k = map(int,fi.readline().split())
a = [0] + list(map(int,fi.readline().split()))
s = [0]*(n+1)
res = 0
for i in range(1,n+1):
    s[i] = s[i-1] + a[i]
for i in range(1,n+1):
    b = s[0:i]
    res += b.count(s[i]-k)
fo.write(str(res))
fi.close();fo.close()
