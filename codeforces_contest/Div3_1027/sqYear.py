t = int(input())

while (t!=0):
    s = int(input())
    a = s**(1/2)
    if (a==int(a)):
        if (a>10):
            print(int(a-5) ,  int(5))
        else:
            print(0, int(a))
    else:
        print(-1)
    t-=1