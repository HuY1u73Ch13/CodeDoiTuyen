fi = open('censor.INP','r'); fo = open('censor.OUT','w')
a = fi.readline()
a = ' '+a.rstrip('\n')
a = a.rstrip(' ')
b = fi.readline()
b = b.rstrip(' ')
b = b.rstrip('\n')
e = ''
c = len(b)
for i in range(1,len(a)):
    e += a[i]
    if len(e) >= c:
        if e[len(e)-c:len(e)] == b:
            e = e[0:len(e) - c]
fo.write(e)
fi.close(); fo.close()
