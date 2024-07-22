def tknp1(l,r,c,k):
    res = -1
    while l <= r:
        g = (l+r)//2
        if c[g] < k:
            res = g
            l = g + 1
        else:
            r = g - 1
    return res
def tknp2(l,r,c,k):
    res = -1
    while l <= r:
        g = (l+r)//2
        if c[g] > k:
            res = g
            r = g - 1
        else:
            l = g + 1
    return res
fi = open('triangle.inp','r'); fo = open('triangle.out','w')
n = int(fi.readline())
a = [0] + list(map(int,fi.readline().split()))
b = [0] + list(map(int,fi.readline().split()))
c = [0] + list(map(int,fi.readline().split()))
c.sort()
res = 0
for i in range(1,n+1):
    for j in range(1,n+1):
        vtc = tknp1(1,n,c,a[i]+b[j])
        vtd = tknp2(1,n,c,abs(a[i]-b[j]))
        if vtd <= vtc and vtd != -1 and vtc != -1:
            res += vtc - vtd + 1
fo.write(str(res))
fi.close();fo.close()
