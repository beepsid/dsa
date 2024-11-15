def pattern(n: int) -> None:
    k=1
    for i in range(1,n+1):
        for j in range(i):
            print(k,end=" ")
            k+=1
        print()
    pass

n=int(input("Enter the number of rows: "))
pattern(n)