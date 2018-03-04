#tester Solution
n,m,x,y = map(int, raw_input().split())
if(n*m-x-y)%2 == 0 and (n%2 or m%2 or x%2 == 0):
    print 'YES'
    print(n*m-x-y)/2
    cells = []
    rg  = range(m)
    for i in xrange(n):
        for j in rg:
            if(i != 0 or j>=x) and (i !=n-1 or j< m-y): #check whether cell belong to leauge or not
                cells.append((i,j))
                #print(i,j)
        if i!=1 or n%2 or m%2==0 or x%2 : rg = rg[::-1] 
     
    for (il, jl) ,(ir,jr) in zip(cells[::2], cells[1::2]): #print the cells
        print il+1, jl+1, ir+1, jr+1
else:
    print 'NO'