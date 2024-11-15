def staircase(n):
    for i in range(0,n):
        space=' '*(i)
        symbol="*"*(n-i)
        print(space+symbol)

n=int(input("Enter the number of rows: "))
staircase(n)