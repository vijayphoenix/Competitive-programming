import sys
for ns in sys.stdin:
    n, c = int(ns), 1
    while n != 1:
        n = 3*n +1  if n%2 else  n>>1
        c += 1
    print(c)