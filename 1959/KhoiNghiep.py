fi = open('KhoiNghiep.inp','r'); fo = open('KhoiNghiep.out','w')
n = int(fi.readline())
c = []
d = [0]
e = [0]
for i in range(1,n+1):
    a,b = map(int,fi.readline().split())
    c.append([a,b])
c.sort()
c = [[0,0]] + c
for i in range(1,n+1):
    d.append(c[i][0])
    e.append(c[i][1])
res = 0
for i in range(1,n+1):
    min1 = 10000
    if d[i] - d[i-1] <=1:
        continue
    else:
        g = d[i]
        for j in range(i,n+1):
            if d[j] == g:
                min1 = min(min1,e[j])
            else:
                break
        res += min1
    fo.write(str(res))
fi.close(); fo.close()
            
                
