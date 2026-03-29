t = int(input())
while t > 0:
    t -= 1
    n = int(input())
    lst = list(map(int, input().split()))
    if n == 1:
        for i in range(n):
            print(1, end=" ")
    else :
        for i in range(n):
            print(2, end=" ")
    print()