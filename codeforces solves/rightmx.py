t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    v = list(map(int,input().split()))
    pref_mx = [0] * n
    pref_mx[0] = v[0]
    for i in range(1,n):
        pref_mx[i] = max(pref_mx[i-1], v[i])
    # for i in pref_mx:
    #     print(i, end=" ")
    ans = 0
    for i in range(n-1,0,-1):
        if v[i] >= pref_mx[i-1]:
            ans += 1
    print(ans + 1)
