def check(a,k):
    res = 0
    for i in range(1,len(a)):
        if a[i] > k:
            res += a[i] - k
    return res
def tknp(a,m,l,r):
    res = 0
    while l <= r:
        g = (l+r)//2
        if check(a,g) >= m:
            res = g
            l = g + 1
        else:
            r = g - 1
    return res
fi = open('wood.inp','r'); fo = open('wood.out','w')
n,m = map(int,fi.readline().split())
a = [0] +  list(map(int,fi.readline().split()))
p = tknp(a,m,1,max(a))
fo.write(str(p))
fi.close();fo.close()
