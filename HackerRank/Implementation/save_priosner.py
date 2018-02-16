#!/bin/python3

import sys

def saveThePrisoner(n, m, s):
    # Complete this function
   return ((s+m-2)%n+1)

t = int(input().strip())
for a0 in range(t):
    n, m, s = input().strip().split(' ')
    n, m, s = [int(n), int(m), int(s)]
    result = saveThePrisoner(n, m, s)
    print(result)