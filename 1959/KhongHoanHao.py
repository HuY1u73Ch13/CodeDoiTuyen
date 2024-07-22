def tonguoc(n):
    res = int(n**0.5)
    nas = 0
    for i in range(1,res+1):
        if n % i == 0:
            nas += i
            if n % (n//i) == 0 and n//i != n and n//i != i:
                nas += n//i
    return nas
fi = open('KhongHoanHao.inp','r'); fo = open('KhongHoanHao.out','w')
l,r = map(int,fi.readline().split())
res = 0
for i in range(l,r+1):
    if tonguoc(i) > i:
        res += 1
fo.write(str(res))
fi.close();fo.close()
