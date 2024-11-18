def pattern(n):
    for i in range(1,n+1):
        for j in range(0,i): 
            print(" ", end="")
        for k in range(i,n+1):
            print(k, end=" ")
        print()
    for i in range(n-1, 0, -1):
        for j in range(i):
            print(" ", end="")
        for k in range(i,n+1):
            print(k, end=" ")
        print()

n=int(input("Enter the number of rows: "))
pattern(n)