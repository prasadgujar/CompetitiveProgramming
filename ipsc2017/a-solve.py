T = int(input())

for t in range(T):
    input()
    r, c = [int(x) for x in input().split()]

    transposed = False
    if r > c:
        transposed = True
        r, c = c, r

    output = []
    for i in range(r):
        output.append((i, i))

    for i in range(c-1, r-1, -2):
        output.append((r-1, i))

    if transposed:
        output = [(b, a) for a, b in output]
    
    print(len(output))
    print('\n'.join(['{} {}'.format(y, x) for y, x in output]))
