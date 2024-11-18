def pattern(n):
    a = n // 2 + 1  

    for i in range(1, a + 1):
        for j in range(a, i, -1): 
            print(" ", end="")
        for k in range(1, i * 2): 
            print("*", end="")
        print()

    for i in range(a - 1, 0, -1):
        for j in range(a, i, -1):  
            print(" ", end="")
        for k in range(1, i * 2):  
            print("*", end="")
        print()

n = int(input("Enter the number of rows: "))
pattern(n)
