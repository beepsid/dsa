def hollow_diamond(n):
    if n % 2 == 0:
        n += 1
    for i in range(n):
        for j in range(n):
            if i < n // 2:
                if j == n // 2 - i or j == n // 2 + i:
                    print('*', end='')
                else:
                    print(' ', end='')
            else:
                if j == i - n // 2 or j == n - 1 - i + n // 2:
                    print('*', end='')
                else:
                    print(' ', end='')
        print()
    return ''

n=int(input("Enter the number of rows: "))
print(hollow_diamond(n))