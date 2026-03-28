t = int(input())
while t > 0:
    t -= 1
    n, c, k = map(int, input().split())
    lst = list(map(int, input().split()))
    lst.sort()
    # print(lst)
    for i in range(n):
        if lst[i] > c:
            break
        else :
            gap = c - lst[i]
            if gap <= k:
                k -= gap
                c += c
            elif k == 0:
                c += lst[i]
            else :
                c += (lst[i] + k)
                k = 0
    print(c)