def staircase(n):
    for i in range(1,n+1):
        space=' '*(n-i)
        symbol="#"*i
        print(space+symbol)

n=int(input("Enter the number of rows: "))
staircase(n)