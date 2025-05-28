t = int(input())
for _ in range(t):
    n, k = map(int, input().split())
    s = input().strip()
    half = n // 2
    cnt0 = s.count('0')
    cnt1 = s.count('1')
    
    # Maximum good pairs we can make:
    max_good = min(cnt0, cnt1) + abs(cnt0 - cnt1) // 2
    
    # Maximum good pairs is limited to n//2
    max_good = min(max_good, half)
    
    if 0 <= k <= half and k == max_good:
        print("YES")
    else:
        print("NO")
