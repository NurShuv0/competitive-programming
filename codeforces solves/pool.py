t = int(input())
while(t > 0):
    # n = int(input())
    # m = int(input())
    n, m = map(int, input().split())
    cnt = 0
    for i in range(n):
        # x = int(input())
        # y = int(input())
        # xi = int(input())
        # yi = int(input())
        x, y, xi, yi = map(int, input().split())
        if (xi + yi == m and x * y == -1 ) or (xi == yi and x * y == 1):
            cnt += 1
    print(cnt)
    t -= 1
