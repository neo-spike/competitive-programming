import sys
sys.set_int_max_str_digits(6000)

def f(x):
    if x==0:
        return 1
    return x*f(x-1)

t=int(input())
for _ in range (t):
    n,k=map(int, input().split())
    n=min(n,7)
    s=int(str(k)*f(n))
    for i in range(1,10, 2):
        if s%i==0:
            print(i, end=' ' )
    print()

