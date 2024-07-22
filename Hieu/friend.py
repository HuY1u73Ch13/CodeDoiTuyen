fi = open('friend.inp','r'); fo = open('friend.out','w')
n,b = map(int,fi.readline().split())
a = [0]
for i in range(n):
    a.append(int(fi.readline()))
res = 0
for i in range(1,n+1):
    if a[i] == b:
        res += 1
    else:
        s = a[0:i]
        res += s.count(b-a[i])
fo.write(str(res))
fi.close();fo.close()
