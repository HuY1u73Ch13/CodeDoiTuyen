import re
fi = open('GIAINEN.inp','r'); fo = open('GIAINEN.out','w')
a = 'A' + fi.readline()
a = a.rstrip(' ')
a = a.rstrip('\n')
m = re.findall(r'\d+',a)
c = 0
for i in range(1,len(a)):
    if 'A' <= a[i] <= 'Z':
        if 'A' <= a[i-1] <= 'Z':
            fo.write(a[i])
        else:
            fo.write(a[i]*int(m[c]))
            c += 1
fi.close(); fo.close()
