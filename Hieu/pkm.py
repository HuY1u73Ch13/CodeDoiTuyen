import sys
sys.stdin = open('pkm.inp','r')
sys.stdout = open('pkm.out','w')
n = int(input())
a = [0]*(n+1)
b = [0]*(n+1)
for i in range(1,n+1):
    s = str(input())
    m,k,r = map(int,input().split())
    a[i] = s
    while m >= k:
        b[i] += m//k
        m = m%k + (m//k)*r
l = max(b)
for i in range(1,n+1):
    print(b[i],end = ' ')
print('')
print(sum(b))
for i in range(1,n+1):
    if b[i] == l:
        c = i
        break
print(a[i])