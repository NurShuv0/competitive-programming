t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    arr = list(map(int, input().split()))
    ans = 0
    for i in range(n):
        if i + 1 >= arr[i]:
            ans += 1
    print(ans)