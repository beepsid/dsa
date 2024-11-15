def pattern(n):
    for i in range(n,0,-1):
        space=' '*(i-1)
        symbol='*'*i
        print(space+symbol)

n=int(input("Enter the number of rows: "))
pattern(n)