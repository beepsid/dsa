def rec(i, n, name):
    if i > n:
        return
    print(name)
    rec(i + 1, n, name)

n = int(input("Enter number of times: "))
name = input("Enter name: ")
rec(1, n, name)