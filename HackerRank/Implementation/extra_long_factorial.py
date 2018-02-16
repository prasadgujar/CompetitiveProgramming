#!/bin/python3

import sys
import math
def extraLongFactorials(n):
    # Complete this function
    # print (math.factorial(n))
    fact = 1
    while(n>0):
        fact =  fact * n
        n = n - 1
    print (fact)    

if __name__ == "__main__":
    n = int(input().strip())
    extraLongFactorials(n)
