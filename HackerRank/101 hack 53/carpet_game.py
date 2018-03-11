# tester solution
def solve(n,m,k):
    k +=1
    assert k>=1
    if k == 1:
        return n*m;
    if k == 2:
        res = 0
        for dn in range(1,n):
            res +=m * (n - dn)
        for dm in range(1,m):
            res +=n * (m - dm)
        for d in range(1,min(n,m)):
            res += (m - d) * (n - d) * 2
        return res * 2
    if  k == 3:
        res = 0
        for d in range (1,n):
            if 2*d < m : res += (m - 2*d) * (n - d) * 2
        for d in range (1,m):
             if 2*d < n: res += (m - d) * ( n - 2*d) * 2
       for d in range(1, min(n, m)):
            res += (m - d) * (n - d) * 4
        return res * 6
    if k == 4:
        res = 0
        for d in range (2,min(n,m),2):
            res += (m - d) * (n - d)
        for d in range (1, min(n,m)):
            res += (m - d) * (n - d)
        return res * 24
    return 0
for i in range (int(input())):
    print(solve(*map(int,input().strip().split())) % (10**9 + 7))
