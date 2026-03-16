t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    s = input()
    ans = 0
    for i in s:
        ans += 1
        if i == 'L':
            break
    print(ans)