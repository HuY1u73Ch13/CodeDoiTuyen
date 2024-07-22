def tonguoc(n):
    a = []
    can_n = int(n**0.5)
    for i in range(2,can_n+1):
        if n%i == 0:
            a.append(i)
            if n % (n//i) == 0:
                a.append(n//i)
    a = list(set(a))
    return sum(a)
def sangnguyento(n):
    can_n = int(n**0.5) + 1
    a = [True]*(n+1)
    for i in range(2,n+1):
        if a[i]:
            for j in range(i*i,n+1,i):
                a[j] = False
    return a
fi = open('HOANHAO.inp','r'); fo = open('HOANHAO.out','w')
n = int(fi.readline())
a = list(map(int,fi.readline().split()))
b = sangnguyento(max(a))
c = []
for i in range(n):
    if b[a[i]]:
        continue
    if tonguoc(a[i]) == a[i] - 1:
        c.append(a[i])
c.sort()
for i in range(len(c)):
    fo.write(str(c[i]) + ' ')
fi.close(); fo.close() 
